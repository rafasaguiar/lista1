#include <iostream>
using namespace std;

int main () {
    float popA, popB;
    int anos;
    popA = 80000;
    popB = 200000;
    anos = 0;

    do {
        popA = popA + (popA * 0.03);
        popB = popB + (popB * 0.015);
        anos++;
    } while (popA < popB);

    cout <<"O numero de anos necessarios para A ficar maior que B sera de: " << anos << " anos.";

return 0;
}