// (3) Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

#include <iostream>
using namespace std;

int main () {
    int numero;
    int soma = 0;
    int contador = 1;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> numero;

    do {
        soma += contador;
        contador++;
    } while (contador < numero);

    cout << "A soma de todos os inteiros positivos anteriores a " << numero << " e igual a " << soma << endl; 

return 0;   
}
