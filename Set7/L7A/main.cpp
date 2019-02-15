#include <iostream>
#include <fstream>
#include <ctime>
int main() {

    char userChoice, computerChoice,keepPlaying;
    int computerInteger;
    bool computerVict, userVict, tie;
    int userTally = 0, computerTally = 0, tieTally = 0;

    std::ofstream RPS("gameLog");

    if (RPS.fail()){
        std::cerr << "Error opening output file\n";
        exit(1);

    }


    do {
        //Get user's choice
        std::cout << "Do you think you can win at Rock Paper Scissors? (Enter R, P, S)" << std::endl;

        std::cin >> userChoice;

        userChoice = std::toupper(userChoice);

        RPS << "Time: " << time(nullptr) << " Human: ";



        std::cout << "You chose: ";
        switch (userChoice) {
            case 'R':
                std::cout << "Rock\n";
                RPS << "Rock. Computer: ";
                break;
            case 'P':
                std::cout << "Paper\n";
                RPS << "Paper. Computer: ";
                break;
            case 'S':
                std::cout << "Scissors\n";
                RPS << "Scissors. Computer: ";
                break;

        }

        //Get Computer's Choice

        srand(time(0));

        computerInteger = rand() % 3;

        std::cout << "The computer chose: ";

        switch (computerInteger) {
            case 0:
                computerChoice = 'R';
                std::cout << "Rock\n"<< std::endl;
                RPS << "Rock.   = ";
                break;
            case 1:
                computerChoice = 'P';
                std::cout << "Paper\n"<< std::endl;
                RPS << "Paper.   = ";
                break;
            case 2:
                computerChoice = 'S';
                std::cout << "Scissors\n"<< std::endl;
                RPS << "Scissors.   = ";
                break;
            default:
                break;


        }

        //Comparing User's choice with Computer's choice

        if (computerChoice == userChoice) {

            userVict = false;
            computerVict = false;
            tie = true;
            RPS << "T\n" << std::endl;

        }
        else if(computerChoice != userChoice){

            switch (computerChoice) {
                case 'R':
                    if (userChoice == 'P') {
                        userVict = true;
                        computerVict = false;
                        tie = false;
                        RPS << "W\n" << std::endl;
                    } else {
                        userVict = false;
                        computerVict = true;
                        tie = false;
                        RPS << "L\n" << std::endl;
                    }

                    break;
                case 'P':
                    if (userChoice == 'S') {
                        userVict = true;
                        computerVict = false;
                        tie = false;
                        RPS << "W\n" << std::endl;
                    } else {
                        userVict = false;
                        computerVict = true;
                        tie = false;
                        RPS << "L\n" << std::endl;
                    }


                    break;
                case 'S':
                    if (userChoice == 'R') {
                        userVict = true;
                        computerVict = false;
                        tie = false;
                        RPS << "W\n" << std::endl;
                    } else {
                        userVict = false;
                        computerVict = true;
                        tie = false;
                        RPS << "L\n" << std::endl;
                    }


                    break;
                default:

                    break;
            }

        }

        if (userVict) {
            std::cout << "You win!\n";
            userTally++;
        }
        if (computerVict) {
            std::cout << "Computer wins!\n";
            computerTally++;
        }
        if (tie) {
            std::cout << "It was a tie.\n";
            tieTally++;
        }

        std::cout<< "Would you like to keep playing? (Enter Y or N)\n";
        std::cin >> keepPlaying;

        keepPlaying = toupper(keepPlaying);

        std:: cout << std::endl;

    }while(keepPlaying == 'Y');

    RPS.close();





    return 0;
}