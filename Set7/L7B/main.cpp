#include <iostream>
#include <fstream>

using namespace std;


int main() {

    char secretChar;

    ifstream whereTheCows("secretMessage.txt");
    ofstream thereTheyAre("decipheredMessage.txt");

    if (whereTheCows.fail()){
        cerr << "Error opening input file.\n";
        exit(1);
    }
    if (thereTheyAre.fail()){
        cerr << "Error opening output file.\n";
        exit(1);
    }

    while (!whereTheCows.eof()) {
        while (whereTheCows.get(secretChar)) {
            if (secretChar == '\n') {
                thereTheyAre << '\n';

            } else if (secretChar == '~') {
                thereTheyAre << " ";
            } else {
                thereTheyAre << char(secretChar + 1);
            }
        }

        whereTheCows.close();
        thereTheyAre.close();


    }



    return 0;
}