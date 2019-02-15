#include <iostream>

using namespace std;

//four kind

bool isFourKind( int die1, int die2, int die3, int die4, int die5 ) {
    int myDice[5] = { die1, die2, die3, die4, die5 };



    for( int i = 0; i <= 4; i++ ){

        int fourKindCounter = 1;        // because there will always be one instance of a number
                                        //resets for every comparison!!! important!

        for( int x = 0; x <= 4; x++ ){  // loops through array and compares each value unless at the
                                        // same index.
            if ( x == i ){
                continue;
            }



            if ( myDice[i] == myDice[x] ){ // adds to the counter if there are for instances of any number
                fourKindCounter++;
            }


        }

        if ( fourKindCounter >= 4 ){      // returns true to function if there is a four of a kind

            return true;


        }

    }



                                        // otherwise, returns false

    return false;




}

int scoreFourKind( int die1, int die2, int die3, int die4, int die5 ) {

    int score = 0;

    if( isFourKind( die1, die2, die3, die4, die5 ) ){  // score for four of a kind is all the dice added together
        score = die1 + die2 + die3 + die4 + die5;
    }

    return score;

}
