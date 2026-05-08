#include <iostream>
using namespace std;
int main () {
    int numero;
    int contador = 1;
    cout <<"Insira um numero inteiro positivo: " << endl;
    cin >> numero;

    cout << "Os numeros impares inteiros e positivos anteriores a " << numero << " sao: " << endl;
    do {
        if (contador % 2 != 0) {
            cout << contador << endl;
        }
        contador++;
    } while (contador < numero);

return 0;
}