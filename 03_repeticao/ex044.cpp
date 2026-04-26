#include <iostream>
using namespace std;

// Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro de 1 a 10.
// O usuário deve informar de qual número ele deseja ver a tabuada.

int main () {
    int numero;
    int contador = 1;
    int resultado;

    cout << "Insira um numero inteiro e veja a sua tabuada completa: " << endl;
    cin >> numero;

    do {
        resultado = numero * contador;
        cout << numero << " x " << contador << " = " << resultado << endl;
        contador++; 

    } while (contador >= 0 && contador <= 10);

    return 0;
}