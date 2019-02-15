#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    const int ROWS = 3;                     //constant values for rows and columns. can change, will be implemented in
    const int COLUMNS = 4;                  //program

    int originalMatrix [ROWS][COLUMNS];     //initializes matrices and their size.
    int transposeMatrix[COLUMNS][ROWS];

    cout << "Hello! \n" << "Enter a " << ROWS << " x " << COLUMNS << " Matrix." << endl;

    for (int i = 0; i <= ROWS - 1; i++){        //gets user input for each value in original matrix.

        for (int x = 0; x <= COLUMNS - 1 ; x++){
            cout << "Please enter Row " << i + 1 << " " << "Column " << x+1 << " : ";
            cin >> originalMatrix[i][x];
        }
    }

    cout << "The matrix you entered was : " << endl;

    for (int i = 0; i <= ROWS - 1; i++){        //prints out the matrix with the proper formatting

        cout << "[";

        for (int x = 0; x <= COLUMNS - 1 ; x++){
            cout << setw(4) << right << originalMatrix[i][x] << " ";
        }

        cout << " ]" << endl;

    }

    cout << "The transpose of the matrix is: " << endl;

    for (int i = 0; i <= ROWS - 1; i++){        //stores the correct values from the original matrix to the
                                                //transpose of the matrix.

        for (int x = 0; x <= COLUMNS - 1 ; x++){

            transposeMatrix [x] [i] =  originalMatrix [i] [x];
        }
    }

    for (int i = 0; i <= COLUMNS - 1; i++){     // prints out the transpose of the original matrix.

        cout << "[";


        for (int x = 0; x <= ROWS - 1 ; x++){
            cout << setw(4) << right << transposeMatrix[i][x] << " ";
        }

        cout << " ]" << endl;

    }

    return 0;
}