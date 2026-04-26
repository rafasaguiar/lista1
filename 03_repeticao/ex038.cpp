#include <iostream>
using namespace std;

int main () {
    int contador = 1;
    do {
        cout << contador << endl;
        contador++;
    } while (contador >= 1 && contador <= 20);

    contador = 1;
    do {
        cout << contador << " ";
        contador ++;
    } while (contador >= 1 && contador <= 20);

    return 0;

}