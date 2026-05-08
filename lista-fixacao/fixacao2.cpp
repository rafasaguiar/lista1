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