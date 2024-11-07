// Christmas-cpp.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "conioex.h"

using namespace std;


int current_number = 0;
int count_max = 0;
int current_char = 1;

int main()
{
    textbackground(BLUE);
    clrscr();
    for (int count_max = 0; count_max < 4; count_max++) {
        
        std::cout << std::string(20-current_char/2, ' ') << std::string(current_char, '*') << std::endl;
        current_char = current_char + 2;
    }
    current_char = 5;
    for (int count_max = 0; count_max < 4; count_max++) {
        std::cout << std::string(20 - current_char / 2, ' ') << std::string(current_char, '*') << std::endl;
        current_char = current_char + 2;
    }
    current_char = 9;
    for (int count_max = 0; count_max < 4; count_max++) {

        std::cout << std::string(20 - current_char / 2, ' ') << std::string(current_char, '*') << std::endl;
        current_char = current_char + 2;
    }
    current_char = 13;
    for (int count_max = 0; count_max < 4; count_max++) {

        std::cout << std::string(20 - current_char / 2, ' ') << std::string(current_char, '*') << std::endl;
        current_char = current_char + 2;
    }
    current_char = 17;
    for (int count_max = 0; count_max < 4; count_max++) {

        std::cout << std::string(20 - current_char / 2, ' ') << std::string(current_char, '*') << std::endl;
        current_char = current_char + 2;
    }
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
