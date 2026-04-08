#include <iostream>
using namespace std;
int main () {
    float pesoideal, altura;
    cout <<"Calculadora de peso ideal\n";
    cout <<"Insira aqui a sua altura em metros e calcularemos o peso ideal: ";
    cin >> altura;
    pesoideal = (72.7 * altura) - 58;
    cout <<"Seu peso ideal, em kg, seria: " << pesoideal << endl;
    return 0;
}