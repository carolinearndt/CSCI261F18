/*
 * Caroline Arndt
 *
 * Lab 4B
 *
 * The purpose of this lab is to use functions with pass by reference and pass by value.
 *
 * Important to note: void functions have no return, they use pass by reference. this is
 * useful because functions can only have one return value that matches the input type.
 */

#include <cmath>
#include <iostream>


using namespace std;

void polarToCartesian (double const radius, double const theta, double& xcoord, double& ycoord){

    //converts coordinates from polar to cartesian

    xcoord = radius * (cos(theta));

    ycoord = radius * (sin(theta));

}


void cartesianToPolar(double const xcoord, double const ycoord, double& radius, double& theta){

    //converts coordinates from cartesian to polar

    radius = sqrt( (xcoord * xcoord) + (ycoord * ycoord));

    theta = atan(ycoord/xcoord);

}


int main() {

    char myCoordinate;

    double r, theta, x, y;

    cout << "Would you like to convert from cartesian or polar? (enter c or p) ";
    cin >> myCoordinate;

    //if statement used to execute either polar to cartesian or cartesian to polar

    if (myCoordinate == 'C' || myCoordinate == 'c'){

        cout << "Input x: ";

        cin >> x;

        cout << "Input y: ";

        cin >> y;


        cartesianToPolar(x,y,r,theta);


        cout << "(" << x << "," << y << ") -> (" << r << "," << theta << ")" << endl;



    }
    else if (myCoordinate == 'P' || myCoordinate == 'p'){
        cout << "Input r: ";

        cin >> r;

        cout << "Input θ (radians): ";

        cin >> theta;


        polarToCartesian(r,theta, x, y);

        cout << "(" << r << "," << theta << ") -> (" << x << "," << y << ")" << endl;

    }


    return 0;
}