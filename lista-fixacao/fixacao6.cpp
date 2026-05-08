#include <iostream>
using namespace std;

int main () {
    float popA = 80000;
    float popB = 200000;
    float taxaA = 0.03;
    float taxaB = 0.015;
    int anos = 0;

    do {
        popA = popA + (popA * taxaA);
        popB = popB + (popB * taxaB);
        anos++;
    } while (popA < popB);

    cout << "A populacao do pais A sera maior ou igual a do pais B em " << anos << " anos " << endl;

return 0;
}