#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/types.h>

using namespace std;

int i = 5;
int y = 3;
int x;
int z;


int calculate_reste(int x){
    x = i % y;
    return x;
}


int divide(int z){
    z = i / y;
    return z;
}


int main(){
    system("clear");
    cout << "Bienvenue en CIEL" << endl;
    cout << "Entrez le premier nombre: ";
    cin >> i;
    cout << "Entrez le deuxieme nombre: ";
    cin >> y;
    while (y == 0){
        main();
    }
    x = calculate_reste(x);
    z = divide(z);
    cout << i << "/" << y << endl;
    cout << "Le resultat est " << z << " et le reste " << x << endl;
}