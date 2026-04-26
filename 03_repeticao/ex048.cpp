#include <iostream>
using namespace std;

int main () {
    int contador = 1;
    int anterior = 0;
    int atual = 1;
    int proximo;

    do {
        proximo = anterior + atual;
        cout << atual << " ";
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        contador++;
    } while (proximo <= 500);

return 0;
}