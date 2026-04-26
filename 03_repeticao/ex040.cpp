#include <iostream>
using namespace std;

int main () {
    int contador = 1;
    float numero, media;
    float soma = 0;

    do {
        cout << "Digite um numero: " << endl;
        cin >> numero;
        soma = soma + numero;
        contador++;
    } while (contador <= 5);

    media = soma/5;
    cout << "A media dos 5 numeros sera: " << media << endl;

return 0;    
}