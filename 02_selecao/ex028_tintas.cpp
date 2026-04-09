#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float area, litros, preco;
    int latas;
    cout <<"Qual a area a ser pintada em metros quadrados?" << endl;
    cin >> area;
    litros = area/3;
    latas = ceil(litros/18);
    preco = latas * 80.00;
    cout <<"Para pintar uma area de " << area << " metros quadrados, voce precisara de " << latas << " latas de tinta." << endl;
    cout <<"O valor da compra sera de " << preco << endl;
    return 0;
}