#include <iostream>

using namespace std;


#define N 20  // Définit la taille du tableau de pascal

// Fonction pour initialiser la matrice avec des zéros
void InitTab(int Matrice[N][N]){
    // Parcourt chaque ligne de la matrice
    for (int i = 0; i < N; i++){
        // Parcourt chaque colonne de la matrice
        for (int j = 0; j < N; j++){
            Matrice[i][j] = 0;  // Initialise chaque élément à 0
            std::cout << Matrice[i][j] << " ";  // Affiche chaque élément
        }
        std::cout << std::endl;  // Saute une ligne après chaque ligne de la matrice
    }
}

// Fonction pour remplir la matrice en formant un triangle de Pascal
void fill_tab(int Matrice[N][N]){
    // Initialisation de la première ligne et de la première colonne avec des 1
    Matrice[0][0] = 1;  // la premiere case est 1
    Matrice[1][0] = 1;  // la premiere case est 1
    Matrice[1][1] = 1;  // la premiere case est 1
    
    for (int i = 0; i < N; i++){
        Matrice[i][0] = 1;  // la premiere case est 1
    }

    // Remplissage des autres éléments en fonction de la somme de l'élément au-dessus et de celui à gauche
    for (int i = 1; i < N; i++){
        for (int j = 1; j < N; j++){
            if(i-1 != 0){
                Matrice[i][j] = Matrice[i - 1][j] + Matrice[i - 1][j - 1];  // Formule du triangle de Pascals
            }
        }
    }
}

void AfficheTab(int Matrice[N][N]){
    // Parcourt chaque ligne
    for (int i = 0; i < N; i++){
        // Affiche les éléments de 0 jusqu'à i pour former un triangle
        for (int j = 0; j <= i; j++){
            std::cout << Matrice[i][j] << " ";  // Affiche chaque élément
        }
        std::cout << std::endl;  // Saute une ligne après chaque ligne affichée
    }
}

// Fonction principale
int main(){
    int tab[N][N];
    InitTab(tab);
    fill_tab(tab);
    AfficheTab(tab);
    return 0;
}
