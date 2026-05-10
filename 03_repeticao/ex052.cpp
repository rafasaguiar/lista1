#include <iostream>
using namespace std;

int main () {
    int numero;
    int continuar;

    do {
    int contador = 1;
    int resultado = 1;

    cout << "Insira um numero para ver seu fatorial: ";
    cin >> numero;

    while (numero < 0 || numero >= 16 ) {
        cout << "Numero invalido, digite novamente: ";
        cin >> numero;
    }

    while (contador <= numero) {
        resultado = resultado * contador;
        contador++;
    }
    cout << "O fatorial de " << numero << " sera: " << resultado << endl;
    cout << "Deseja ver outro fatorial? (1 - sim / qualquer tecla - nao): ";
    cin >> continuar;
    
    }  while (continuar == 1);

return 0;
}