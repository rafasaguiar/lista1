#include <iostream>
using namespace std;
// Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um
// número primo é aquele que é divisível somente por ele mesmo e por 1.
int main () {
    int numero;
    int contador = 1;
    int divisores = 0;
    
    cout << "Digite um numero inteiro e veja se ele e primo: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "Nao e primo";
    }

    else {
        while (contador <= numero) {
            if (numero % contador == 0) {
                divisores++;
            }
            contador++;
        }
                if (divisores == 2) {
                cout << "O numero " << numero << " e primo!" << endl;
                }
                if (divisores != 2) {
                cout << "O numero " << numero << " nao e primo!" << endl;
                }
    }
    return 0;
}