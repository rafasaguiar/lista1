#include <iostream>
using namespace std;
int main () {
    float raio, area;
    cout <<"Calculadora de areas circulares\n";
    cout <<"Insira aqui o raio, em metros, do circulo: \n";
    cin >> raio;
    area = raio * raio * 3.14;
    cout <<"A area do circulo sera de, aproximadamente, " << area << " metros quadrados. " << endl;
    return 0;
}