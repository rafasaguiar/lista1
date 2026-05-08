#include <iostream>
using namespace std;

int main () {
    float popA;
    float popB;
    float taxaA;
    float taxaB;
    int anos = 0;

    cout << "Insira a populacao atual do pais A: " << endl;
    cin >> popA;
    cout << "Insira a taxa anual de crescimento do pais A, em %: " << endl;
    cin >> taxaA;

    cout << "Insira a populacao atual do pais B: " << endl;
    cin >> popB;
    cout << "Insira a taxa anual de crescimento do pais B, em %: " << endl;
    cin >> taxaB;

    if (taxaA > taxaB && popA <= popB) {
        do {
        popA = popA + (popA * (taxaA/100.00));
        popB = popB + (popB * (taxaB/100.00));
        anos++;
        } while (popA < popB);

        cout <<"A populacao de A sera maior que B em " << anos << " anos " << endl;
    }

    else if (taxaA <= taxaB && popA >= popB) {
        do {
        popA = popA + (popA * (taxaA/100));
        popB = popB + (popB * (taxaB/100));
        anos++;
        } while (popB < popA);

        cout <<"A populacao de B sera maior que A em " << anos << " anos " << endl;
    }

    else {
        cout << "As taxas e populacoes informadas nao permitem uma ultrapassagem." << endl;
    }

return 0;
}