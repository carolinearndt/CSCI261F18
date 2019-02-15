//
// Created by Caroline Arndt on 12/3/18.
//

#ifndef A8_MAGICDUNDIECAROLINEARNDT_H
#define A8_MAGICDUNDIECAROLINEARNDT_H
#include<iostream>

class MagicDundie {
private:
    std::string _triviaQuestion;
    std::string _userAnswer;
    std::string _correctAnswer;
    std:: string _dundie;
    std::string _blurb;
    std:: string getCorrectAnswer();
    void setCorrectAnswer(std::string correctAnswer);

public:
    MagicDundie();

    std::string getTriviaQuestion();
    std::string getUserAnswer();
    std::string getDundie();
    std::string getBlurb();
    void setQuestion(std::string triviaQuestion);
    void setUserAnswer(std::string userAnswer);
    void setDundie(std::string dundie);
    void setBlurb(std::string blurb);


    void introduction();
    bool compareAnswers();
    void playOfficeTrivia();






};


#endif //A8_MAGICDUNDIECAROLINEARNDT_H
