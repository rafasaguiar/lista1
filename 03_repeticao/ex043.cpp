#include <iostream>
using namespace std;

int main () {
    int inicio, final;
    int contador;
    int soma = 0;

    cout << "Digite um numero inteiro: " << endl;
    cin >> inicio;
    cout << "Digite outro numero inteiro: " << endl;
    cin >> final;
    contador = inicio;
    do {
        cout << contador << " " << endl;
        soma += contador;
        contador++;
    } while (contador >= inicio && contador <= final);

    cout <<"A soma sera: " << soma << endl;

return 0;
}