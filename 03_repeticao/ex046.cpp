#include <iostream>
using namespace std;

int main () {
    int contador = 1;
    int numero;
    int pares = 0;
    int impares = 0;

    do {
        cout <<"Insira um numero inteiro: " << endl;
        cin >> numero;

        if (numero % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    contador++;
    } while (contador <= 10);

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;

return 0;
}