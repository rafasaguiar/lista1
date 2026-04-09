#include <iostream>
using namespace std;
int main () {
    char letra;
    float altura, pesoideal;
    cout <<"Calculadora de peso ideal - masculino e feminino";
    cout <<"\nQual o seu sexo? Digite (M) para masculino ou (F) para feminino: ";
    cin >> letra;
    cout <<"\nQual a sua altura em metros? ";
    cin >> altura;

    if (letra == 'M' || letra == 'm') {
        pesoideal = (72.70 * altura) - 58.00;
        cout <<"O peso ideal para um homem da sua altura seria de: " << pesoideal;
    }
    else if (letra == 'F' || letra == 'f') {
        pesoideal = (62.10 * altura) - 44.70;
        cout <<"O peso ideal para uma mulher da sua altura seria de: " << pesoideal;
    }
    else {
        cout <<"Invalido!";
    }
}