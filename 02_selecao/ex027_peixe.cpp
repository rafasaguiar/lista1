#include <iostream>
using namespace std;
int main () {
    float quilos, excesso, multa;
    cout <<"Quantos quilos de peixe foram pescados hoje? ";
    cin >> quilos;

    if (quilos > 50) {
        excesso = quilos - 50.00;
        multa = excesso * 4;
        cout <<"Quantidade de quilos excedentes: " << excesso << endl;
        cout <<"Valor da multa a pagar em R$: " << multa << endl;
    }
    else {
        cout <<"Nao ha excedente nem multas a pagar";
    }

return 0;
}