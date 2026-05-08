#include <iostream>
using namespace std;
// Faça um programa que peça um inteiro entre zero e dez. Mostre uma mensagem caso o valor seja
// inválido e continue pedindo até que o usuário informe um valor válido.

int main () {
    int numero;
    cout << "Insira um numero inteiro entre zero (0) e dez (10)" << endl;
    do {
        cin >> numero;
        if (numero < 0 || numero > 10) {
            cout << "Invalido! Insira novamente:" << endl;
        }
    } while (numero < 0 || numero > 10);

return 0;
}