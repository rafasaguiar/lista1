#include <iostream>
using namespace std;
int main () {
    float lado, area, area2;
    cout <<"Calculadora de area de quadrado\n";
    cout <<"Insira aqui o valor do lado do quadrado, em metros, a ser calculado\n";
    cin >> lado;
    area = lado * lado;
    area2 = 2 * area;
    cout <<"A area do quadrado de lado " << lado << " metros, sera de " << area << " metros quadrados " << endl;
    cout <<"O dobro da area desse quadrado medira " << area2 << " metros quadrados " <<endl;
    return 0;
}