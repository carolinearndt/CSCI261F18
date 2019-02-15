
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "william a harris";

    int f = s.rfind(' ') - s.find(' ')-1;

    cout << f;
    return 0;
}