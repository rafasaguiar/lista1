#include <iostream>
using namespace std;

int main () {
    int numero;
    do {
        cout << "Insira um numero inteiro entre 0 e 10: ";
        cin >> numero;

        if (numero < 0 || numero > 10) {
            cout <<"Valor invalido!" << endl;
        }
    } while (numero < 0 || numero > 10);
}