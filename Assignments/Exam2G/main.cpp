#include <iostream>
#include <string>

using namespace std;

int letterMan(string myString, char letter ){

    int n = myString.length();
    int counter = 0;


//changes all values to lower case
    for (int i = 0; i <= n; i++){


        myString[i] =  tolower(myString[i]);

        //tests for char

        if (myString[i] == char(letter) || toupper(myString[i] == char(letter))){
           counter +=1;
        }


    }

return counter;
}

int main() {

    return 0;
}