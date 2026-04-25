#include <iostream>
using namespace std;

int main () {

    float popA, taxaA, popB, taxaB;
    int anos, continuar;

    do {
    do {
    cout << "Insira a populacao atual do pais A: ";
    cin >> popA;
    if (popA <= 0) {
        cout << "Populacao invalida!";
        } 
    } while (popA <= 0);

    do {
    cout << "Insira a taxa de crescimento de A: ";
    cin >> taxaA;
    if (taxaA <= 0) {
        cout << "Taxa invalida!";
    } 
    } while (taxaA <= 0);

    do {
    cout << "Insira a populacao atual do pais B: ";
    cin >> popB;
    if (popB <= 0) {
        cout << "Populacao invalida!";
        } 
    } while (popB <= 0);

    do {
    cout << "Insira a taxa de crescimento de B: ";
    cin >> taxaB;
    if (taxaB <= 0) {
        cout << "Taxa invalida!";
    } 
    } while (taxaB <= 0);

    anos = 0;

    do {
        popA = popA + (popA * taxaA/100);
        popB = popB + (popB * taxaB/100);
        anos++;
    } while (popA < popB);

    cout <<"O numero de anos necessarios para A ficar maior que B sera de: " << anos << " anos." << endl;
    cout <<"Deseja continuar (digite 1 para sim / qualquer outra tecla para nao)";
    cin >> continuar;
    } while (continuar == 1);

    cout <<"Sistema encerrado!";
return 0;
}