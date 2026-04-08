#include <iostream>
using namespace std;
int main () {
    float n1;
    cout <<"Verficador de numeros positivos e negativos\n";
    cout <<"Insira aqui um numero real qualquer: ";
    cin >> n1;
    if (n1 > 0) {
        cout <<"O numero " << n1 << " e positivo!";
    }
    else {
        cout <<"O numero " << n1 << " e negativo!";
    }
    return 0;
}