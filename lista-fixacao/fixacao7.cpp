#include <iostream>
using namespace std;
int main () {
    int numero1, numero2;
    int soma = 0;
    int contador = 1;

    cout <<"Insira um numero inteiro: " << endl;
    cin >> numero1;

    cout << "Insira outro numero inteiro " << endl;
    cin >> numero2;

    if (numero2 == numero1 - 1 || numero1 == numero2 - 1) {
        cout << "Nao ha inteiros entre os numeros informados" << endl;
    }

    else if (numero1 < numero2) {
        soma = numero1 + 1;
            do {
                cout << soma << " ";
                soma++;
            } while (soma < numero2);
    }

    else if (numero2 < numero1) {
        soma = numero2 + 1;
            do {
                cout << soma << " ";
                soma++;
            } while (soma < numero1);
    }

    else {
        cout << "Foi digitado o mesmo numero duas vezes" << endl;
    }
return 0;
}