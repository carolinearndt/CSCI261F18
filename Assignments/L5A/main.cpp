#include <iostream>

using namespace std;


int main() {

    int myArray[15];

    cout << "Enter 15 numbers and I will tell you what they are." << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << "Number " << i + 1 << " :";

        cin >> myArray[i];

    }

    cout << "Great!" << endl << "The numbers are: " << endl;

    for (int i = 0 ; i < 15 ; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}