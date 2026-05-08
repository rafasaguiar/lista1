// Escreva um algoritmo que calcule o preço de um produto a partir do tempo levado na sua
// produção. Use a seguinte relação para calcular o preço:
// 1 mês: R$ 1.000,00
// 2 meses: R$ 1.500,00
// 3meses: R$ 2.000,00
// 4 meses: R$ 3.000,00
// mais de 4 meses: R$ 5.000,00

#include <iostream>
using namespace std;

int main () {

    int meses;
    cout << "Qual o tempo de producao do produto em meses? " << endl;
    cin >> meses;

    if (meses == 1) {
        cout << "Preco: R$ 1.000,00" << endl;
    }
    else if (meses == 2) {
        cout << "Preco: R$ 1.500,00" << endl;
    }
    else if (meses == 3) {
        cout << "Preco: R$ 2.000,00" << endl;
    }
    else if (meses == 4) {
        cout << "Preco: R$ 3.000,00" << endl;
    }
    else if (meses > 4) {
        cout << "Preco: R$ 5.000,00" << endl;
    }
    else {
        cout << "Quantidade invalida" << endl;
    }

return 0;
}