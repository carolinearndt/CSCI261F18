#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    int tableHeight = 2, tableWidth = 2, multiplier = 1;


    //User inputs for table width and height
    do
    {
        cin >> tableHeight;
    } while ( tableHeight > 10 || tableHeight < 2 );

    do
    {
        cin >> tableWidth;
    } while ( tableWidth > 10 || tableWidth < 2 );




    cout << "..";

    for (int i = 1; i <= tableWidth; i++)
    {
        cout << setw(4) << setfill('.') << right << i;
    }

    cout << endl;

    for ( int i = 1; i <= tableHeight; i++)
    {

        cout << setw(2) << setfill('.') << i;
        for ( int x = 1; x <= tableWidth; ++x)
        {
            cout  << setw(4) << x * multiplier ;

        }

        cout << endl;
        multiplier ++;
    }

    return 0;
}