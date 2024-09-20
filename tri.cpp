#include <iostream>
#include <sys/types.h>


using namespace std;

int n1;
int n2;
int n3;

int mini;
int moy;
int maxi;

int main()
{
    cout << "N1: " << endl;
    cin >> n1;
    cout << "N2: " << endl;
    cin >> n2;
    cout << "N3: " << endl;
    cin >> n3;
    system("clear");
    
    // Case where all numbers are equal
    if (n1 == n2 && n2 == n3) {
        cout << "Equal numbers" << endl;
    } 
    // Case where n1 is the greatest
    else if (n1 > n2 && n1 > n3) {
        maxi = n1;
        if (n2 > n3) {
            moy = n2;
            mini = n3;
        } else {
            moy = n3;
            mini = n2;
        }
    } 
    // Case where n2 is the greatest
    else if (n2 > n1 && n2 > n3) {
        maxi = n2;
        if (n1 > n3) {
            moy = n1;
            mini = n3;
        } else {
            moy = n3;
            mini = n1;
        }
    } 

    else {
        maxi = n3;
        if (n1 > n2) {
            moy = n1;
            mini = n2;
        } else {
            moy = n2;
            mini = n1;
        }
    }
    cout << mini << " < " << moy << " < " << maxi << endl;

    return 0;
}
