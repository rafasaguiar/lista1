#include <iostream>
using namespace std;

int main () {
    int contador = 1;
    float numero, maior;

    do {
        cout << "Digite um numero: " << endl;
        cin >> numero;

        if (contador == 1) {
            maior = numero;
        }
        else {
            if (numero > maior) {
                maior = numero;
            }
        }
         contador++;
    } while (contador <= 5);

    cout << "O maior numero sera: " << maior << endl;
return 0;
}