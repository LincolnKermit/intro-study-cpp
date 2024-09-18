// print PI in cpp through lib

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double radius;
double pi = M_PI;

int main(){
    
    cout << "PI = " << pi << endl;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "The area of the circle is " << fixed << setprecision(2) << pi * pow(radius, 2) << endl;
    return 0;
}