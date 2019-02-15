//
// Created by Caroline Arndt on 12/3/18.
//

#include "MagicDundieCarolineArndt.h"

MagicDundie::MagicDundie() {
    srand(time(0));

    int yourQuestionIs = rand() % 5 + 1;

    switch(yourQuestionIs) {
        case 1: {
            setQuestion("From the TV series \"The Office\", who started the fire?");
            setCorrectAnswer("Ryan");
            setDundie("\"Hottest in the Office\" Dundie");
            setBlurb("Ryan started the Fire! It just started burning, the temp is still learning!");
            break;
        }

        case 2: {
            setQuestion("From the TV series \"The Office\", Where do Jim and Pam actually get married?");
            setCorrectAnswer("Niagara Falls");
            setDundie("\"Whitest Sneakers\" Dundie");
            setBlurb("\"When you're a kid, you assume your parents are soulmates. \nMy kids are gonna be right about that.\"\n-Pam");
            break;
        }
        case 3: {
            setQuestion(
                    "From the TV series \"The Office\", What is the name of the game invented during the office olypmics?");
            setCorrectAnswer("Flonkerton");
            setDundie("\"Worst Salesman of the Year\" Dundie");
            setBlurb("\"You miss 100% of the shots you don't take.\" (Wayne Gretzky) \n-Michael Scott");
            break;
        }
        case 4: {
            setQuestion("From the TV series \"The Office\", What is the name of Michael's movie?");
            setCorrectAnswer("Threat Level Midnight");
            setDundie("\"Extreme Repulsiveness\" Dundie");
            setBlurb("Clean up on aisle 5.");
            break;
        }
        case 5: {
            setQuestion("From the TV series \"The Office\", Which establishment does Pam feel God in?");
            setCorrectAnswer("Chili's");
            setDundie("\"Spicy Curry\" Award!");
            setBlurb("I am Beyonce always. \n-Michael Scott");
            break;
        }

    }



}

std::string MagicDundie::getTriviaQuestion() {
    return _triviaQuestion;

}


std::string MagicDundie::getUserAnswer(){
    return _userAnswer;
}
std::string MagicDundie::getDundie(){
    return _dundie;
}
std::string MagicDundie::getBlurb(){
    return _blurb;
}

void MagicDundie::setQuestion(std::string triviaQuestion){
    _triviaQuestion = triviaQuestion;
}
void MagicDundie::setUserAnswer(std::string userAnswer){
    _userAnswer = userAnswer;
}
void MagicDundie::setCorrectAnswer(std::string correctAnswer){
    _correctAnswer = correctAnswer;
}
void MagicDundie::setDundie(std::string dundie){
    _dundie = dundie;
}
std:: string MagicDundie:: getCorrectAnswer(){
    return _correctAnswer;
}
void MagicDundie::setBlurb(std::string blurb) {
    _blurb = blurb;
}
bool MagicDundie::compareAnswers(){
    if (_correctAnswer == _userAnswer)
        return true;
    else
        return false;
}
void MagicDundie::introduction(){

    std:: cout << "Let's play some of 'The Office' Trivia! \n" << std::endl;

}

void MagicDundie::playOfficeTrivia() {

    std::string yourAnswer;

    introduction();

    std:: cout << getTriviaQuestion() << std::endl << "Your answer: ";

    getline(std::cin, yourAnswer);

    setUserAnswer(yourAnswer);

    if (compareAnswers()){
        std::cout << "You are correct! ";
        std::cout << getUserAnswer() << " is the right answer. Here's a " << getDundie() << "!\n" << std::endl;
        std::cout << getBlurb() << std::endl;
    }
    else
    {
        std::cout << "Sorry, " << getUserAnswer() << " is incorrect. The correct answer was " << getCorrectAnswer();
    }

}