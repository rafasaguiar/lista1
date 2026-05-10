#include <iostream>
using namespace std;

int main () {
    int numero;
    int contador = 1;
    int divisores = 0;
    
    cout << "Digite um numero inteiro e veja se ele e primo: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "Nao e primo";
    }

    else {
    cout << "Seus divisores sao: ";
        while (contador <= numero) {
            if (numero % contador == 0) {
                divisores++;
                cout << contador << " ";
            }
        contador++;
    }
                if (divisores == 2) {
                cout << "\nO numero " << numero << " e primo!" << endl;
                }
                else {
                cout << "\nO numero " << numero << " nao e primo!" << endl;
                }
                }
    return 0;
}