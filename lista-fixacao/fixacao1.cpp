#include <iostream>
using namespace std;

int main () {
    int numero;
    cout << "Digite um numero qualquer: " << endl;
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero e par" << endl;
    }
    else {
        cout << "O numero e impar" << endl;
    }

    if (numero >= 0) {
        cout <<"O numero e positivo" << endl;
    }
    else {
        cout <<"O numero e negativo" << endl;
    }

    if (numero > 100) {
        cout <<"O numero e maior que 100" << endl;
    }
    else if (numero == 100) {
        cout <<"O numero e igual a 100" << endl;
    }
    else {
        cout <<"O numero e menor que 100" << endl;
    }

return 0;
}