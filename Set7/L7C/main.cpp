#include <iostream>                             // for standard input/output
using namespace std;                            // using the standard namespace

#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    // display "Hello, World!" -- this still appears in our Run terminal as before
    cout << "Hello, World!" << endl;

    // create a RenderWindow object
    // specify the size to be 640x640
    // set the title to be "SFML Example Window"
    RenderWindow window( VideoMode(640, 640), "Sigma Kappa" );

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING BELOW HERE
    //********************************************

    //********************************************
    //  PLACE ANY FILE INPUT PROCESSING ABOVE HERE
    //********************************************

    // while our window is open, keep it open
    // this is our draw loop
    while( window.isOpen() ) {
        window.clear( sf::Color (230,230,250) );           // clear the contents of the old frame
        // by setting the window to black

        //****************************************
        //  ADD ALL OF OUR DRAWING BELOW HERE
        //****************************************


        //line 1

        ConvexShape line1;

        line1.setPointCount(4);

        line1.setPoint(0, Vector2f(50,100));
        line1.setPoint(1, Vector2f(275,100));
        line1.setPoint(2, Vector2f(275,150));
        line1.setPoint(3, Vector2f(50,150));

        line1.setFillColor(Color(128,0,0));

        window.draw(line1);

        //line2
        ConvexShape line2;

        line2.setPointCount(4);

        line2.setPoint(0, Vector2f(50,150));
        line2.setPoint(1, Vector2f(115,150));
        line2.setPoint(2, Vector2f(200,300));
        line2.setPoint(3, Vector2f(135,300));

        line2.setFillColor(Color(128,0,0));

        window.draw(line2);


        //line3

        ConvexShape line3;

        line3.setPointCount(4);

        line3.setPoint (0, Vector2f(135,300));
        line3.setPoint (1,Vector2f(200,300));
        line3.setPoint (2,Vector2f(115,450));
        line3.setPoint (3,Vector2f(50,450));

        line3.setFillColor(Color(128,0,0));

        window.draw(line3);

        //line 4

        ConvexShape line4;

        line4.setPointCount(4);

        line4.setPoint(0,Vector2f(50,450));
        line4.setPoint(1,Vector2f(275,450));
        line4.setPoint(2,Vector2f(275,500));
        line4.setPoint(3,Vector2f(50,500));

        line4.setFillColor(Color(128,0,0));

        window.draw(line4);

        //line 5

        ConvexShape line5;

        line5.setPointCount(4);

        line5.setPoint(0,Vector2f(325,100));
        line5.setPoint(1,Vector2f(375,100));
        line5.setPoint(2,Vector2f(375,500));
        line5.setPoint(3,Vector2f(325,500));

        line5.setFillColor(Color(128,0,0));

        window.draw(line5);


        //line 6

        ConvexShape line6;

        line6.setPointCount(4);

        line6.setPoint(0, Vector2f(325,300));
        line6.setPoint(1, Vector2f(390,300));
        line6.setPoint(2, Vector2f(565,100));
        line6.setPoint(3, Vector2f(500,100));

        line6.setFillColor(Color(128,0,0));

        window.draw(line6);


        //line 7

        ConvexShape line7;

        line7.setPointCount(4);

        line7.setPoint(0,Vector2f(325,300));
        line7.setPoint(1,Vector2f(390,300));
        line7.setPoint(2,Vector2f(565,500));
        line7.setPoint(3,Vector2f(500,500));

        line7.setFillColor(Color(128,0,0));

        window.draw(line7);


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