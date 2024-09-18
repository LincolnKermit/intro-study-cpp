#include <iostream>
#include <sys/types.h>

using namespace std;

char customer[100];
char product[100];
int quantity;
int price;
int taxes;

// Calculer les taxes en pourcentage
double calculate_taxes_pc(int taxes) {
    return taxes / 100.0; // Utiliser 100.0 pour un résultat en double
}






int main() {
    cout << "TP Facture, par LK." << endl;
    system("clear");

    cout << "Entrez le nom du client: " << endl;
    cin >> customer;
    cout << "Entrez le nom du produit: " << endl;
    cin >> product;
    cout << "Entrez la quantite: " << endl;
    cin >> quantity;
    cout << "Entrez le prix unitaire: " << endl;
    cin >> price;
    cout << "Entrez les taxes (en %): " << endl;
    cin >> taxes;

    system("clear");
// //
//     // Affichage de la facture
//     cout << "\nFacture de " << customer << endl;
//     cout << "\nProduit: " << product << endl;
//     cout << "\nQuantite: " << quantity << endl;
//     cout << "\nPrix unitaire: " << price << endl;
//     cout << "\nTaxes: " << taxes << "%" << endl;

    // Calculer les taxes en pourcentage et le prix total
    double taxes_pc = calculate_taxes_pc(taxes);
    double total_price = quantity * price * (1 + taxes_pc); // Prix avec taxes
    // cout << "Prix Total (avec taxes): " << total_price << " euros" << endl;
//


    cout << "\n \n \n" << endl;
    cout << "Société " << customer << endl;
    cout << "69 rue de la République" << endl;
    cout << "75003 PARIS" << endl;
    cout << "SIRET : 54134-1034" << endl;
    cout << "" << endl;
    cout << customer << endl;
    cout << "" << endl;
    cout << "Produit : " << product << "    Qt : " << quantity << "    PHUT : " << price << "    PTHT : " << quantity * price << "    PPTC : " << total_price << endl;
    cout << "" << endl;
    cout << "TOTAL A REGLER .........." << total_price << "\n dont TVA ..............." << taxes << endl;
    return 0;




}





