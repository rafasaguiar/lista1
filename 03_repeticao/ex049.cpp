#include <iostream>
using namespace std;

int main () {
    int numero;
    int contador = 1;
    int resultado = 1;

    cout << "Insira um numero para ver seu fatorial: ";
    cin >> numero;

    do {
        resultado = resultado * contador;
        contador++;
    } while (contador <= numero);

    cout << "O fatorial de " << numero << " sera: " << resultado;

return 0;
}