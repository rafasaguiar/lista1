#include <iostream>
using namespace std;

int main () {
    int contador = 1;

    do {
        if (contador % 2 != 0) {
            cout << contador << endl;
        }
    contador++;
    } while (contador >= 1 && contador <= 50);
return 0;
}