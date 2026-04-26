#include <iostream>
using namespace std;

int main () {
    int n;
    int contador = 1;
    int anterior = 0;
    int atual = 1;
    int proximo;

    cout << "Quantos termos da sequencia de Fibonacci deseja ver? ";
    cin >> n;

    do {
        proximo = anterior + atual;
        cout << atual << " ";
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        contador++;
    } while (contador <= n);

return 0;
}