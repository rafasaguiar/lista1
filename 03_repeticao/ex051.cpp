#include <iostream>
using namespace std;

int main () {
    int quantidade;
    float numero, maior, menor;
    float soma = 0;

    cout <<"Qual sera a quantidade de numeros digitados? ";
    cin >> quantidade;

    if (quantidade <= 0) {
        cout << "Conjunto vazio" << endl;
    }

    else {
        cout << "Digite o primeiro numero (entre 0 e 1000): ";
        cin >> numero;
        
       while (numero < 0 || numero > 1000) {
        cout << "Invalido! Digite novamente: ";
        cin >> numero;
        }   

        soma = numero;
        maior = numero;
        menor = numero;
        int contador = 2;

        while (contador <= quantidade) {
            cout << "Digite o proximo numero: ";
            cin >> numero;

            while (numero < 0 || numero > 1000) {
            cout << "Invalido! Digite novamente: ";
            cin >> numero;
            }

            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        
            soma = soma + numero;
            contador++;
        }
    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;
    cout << "A soma deles sera: " << soma << endl;
    }

return 0;
}