#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    float area, litros;
    cout <<"Digite a area a ser pintada em metros quadrados: ";
    cin >> area;
    litros = (area / 6) * 1.1;
    cout <<"\nTotal de tinta necessaria, com acrescimo de 10%: " << litros << endl;

    int latasA = ceil(litros / 18);
    float precoA = latasA * 80.00;
    cout <<"A) Comprando apenas latas de 18 litros" << endl;
    cout <<"Sera preciso " << latasA << " latas de 18 litros" << endl;
    cout <<"Custo total (R$): " << precoA << endl;

    int latasB = ceil(litros / 3.60);
    float precoB = latasB * 25.00;
    cout <<"B) Comprando apenas latas de 3,6 litros" << endl;
    cout <<"Sera preciso " << latasB << " latas de 3,6 litros" << endl;
    cout <<"Custo total (R$): " << precoB << endl;

    int latasC = (int)(litros / 18);
    float restotinta = litros - (latasC * 18);
    int galoesC = ceil(restotinta / 3.6);
    float precoC = (latasC * 80) + (galoesC * 25);
    cout <<"C) Comprando de forma mista, serao precisas " << latasC << " latas de 18 litros e " << galoesC << " latas de 3,6 litros" << endl;
    cout <<"Custo total (R$): " << precoC << endl;

    if (precoA <= precoB && precoA <= precoC) {
        cout <<"Sera mais vanatajosa a opcao A";
    }
    else if (precoB <= precoA && precoB <= precoC) {
        cout <<"Sera mais vantajosa a opcao B";
    }
    else if (precoC <= precoA && precoC <= precoB) {
        cout <<"Sera mais vantajosa a opcao C";
    }
    else if (precoA == precoB == precoC) {
        cout <<"Tanto faz qualquer opcao de compra";
    }
    else if (precoA == precoB) {
        cout <<"Tanto faz entre as opcoes A e B";
    }
    else {
        cout <<"Tanto faz entre as opcoes B e C";
    }
    return 0;

}