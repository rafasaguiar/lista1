#include <iostream>
using namespace std;

int main () {
    int inicio, final;
    int contador;
    cout << "Digite um numero inteiro: " << endl;
    cin >> inicio;
    cout << "Digite outro numero inteiro: " << endl;
    cin >> final;
    contador = inicio;
    do {
        cout << contador << " " << endl;
        contador++;
    } while (contador >= inicio && contador <= final);

return 0;
}