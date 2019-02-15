#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Functions.h"
using namespace std;// using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {

    string theBestString;
    string appendString;
    vector <string> wordsInString;
    vector <WordCount> myWordCountVector;
    LetterCount myLetterCountArray[26];
    LetterCount mostFrequent, leastFrequent;
    const unsigned int HEIGHT = 640;

    getString(wordsInString);

    getWordCount(wordsInString, myWordCountVector);

    mostAndLeast(myWordCountVector);

    letterCount(wordsInString,myLetterCountArray, mostFrequent,leastFrequent);




    //Loading in a font
    Font myFont;
    if (!myFont.loadFromFile("data/arial.ttf")){
        cerr << "Could not load font.";
        return -1;
    }
    Text myLabel;
    myLabel.setFont(myFont);

    vector<Text> labels;


    //setting up drawing the bars
    float x,y,height;
    const float WIDTH = (float) HEIGHT / 26;
    x = -24;

    vector<RectangleShape> bar;
    RectangleShape myBar;

    //creates a rectangle and stores it in a vector, also assigns a letter with that bar
    for (int i = 0; i < 26; i++) {

        string labelString(1,myLetterCountArray[i].letter);
        height = (myLetterCountArray[i].count / mostFrequent.count) * HEIGHT;

        y = 640 - height;
        x +=WIDTH;
        myBar.setPosition(Vector2f(x,y));
        myBar.setSize(Vector2f(WIDTH,height));
        myBar.setFillColor(Color::Green);

        if (mostFrequent.count == myLetterCountArray[i].count) //changes the bar color to red if it occurs the most
            myBar.setFillColor(Color::Red);

        bar.push_back(myBar);

        myLabel.setString(labelString);                         // creating the label
        myLabel.setPosition(x, HEIGHT - 30);

        labels.push_back(myLabel);




    }


    // display "Hello, World!" -- this still appears in our Run terminal as before
    cout << "Hello, World!" << endl;

    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(HEIGHT,HEIGHT), "SFML Example Window" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( Color::Black );           // clear the contents of the old frame
        // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************


        //draws the bar and its label
        for (int j = 0; j < 26; j++) {
            window.draw(bar.at(j));
            window.draw(labels.at(j));
        }



        //****************************************
        //  ADD ALL OF OUR DRAWING ABOVE HERE
        //****************************************

        window.display();                       // display the window

        //****************************************
        // HANDLE EVENTS BELOW HERE
        //****************************************
        Event event;
        while( window.pollEvent(event) ) {      // ask the window if any events occurred
            if( event.type == Event::Closed ) { // if event type is a closed event
                // i.e. they clicked the X on the window
                window.close();                 // then close our window
            }
        }
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}