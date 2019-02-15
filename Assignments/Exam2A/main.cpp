#include <iostream>

struct CSM {
    int spotsL;
    int spotsR;

};

using namespace std;

int main() {
//class Butterfly
    CSM butterfly;

//user input for each wing
    cin >> butterfly.spotsL;


    cin>> butterfly.spotsR;

    //tests whether even or odd
    int evenOdd = (butterfly.spotsR + butterfly.spotsL) % 2;

    //for even
    if (butterfly.spotsL == butterfly.spotsR){

        if ((butterfly.spotsR > 0)){
            cout << "Even " << butterfly.spotsR * 2;
        }
        else if (butterfly.spotsL > 0){
            cout << "Even " << butterfly.spotsL*2;
        }
        else{
            cout << "Not possible";
        }



    }




    //for odd

    else  {


        if ((butterfly.spotsL > butterfly.spotsR) && (butterfly.spotsL > 0)) {
            cout << "Odd " << butterfly.spotsL * 2;

        }
        else if((butterfly.spotsR > butterfly.spotsL )&& (butterfly.spotsR > 0)){
            cout << "Odd " << butterfly.spotsR *2;
        }
        else{
            cout << "Not possible";
        }
    }




    return 0;
}