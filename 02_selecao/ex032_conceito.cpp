#include <iostream>
using namespace std;
int main () {
    float nota;
    cout <<"Insira aqui sua nota, de 0 a 100: ";
    cin >> nota;

    if (nota >= 90.0 && nota <= 100) {
        cout <<"Conceito A";
    }

    else if (nota >= 70.0 && nota < 90.0) {
        cout <<"conceito B";
    }
    else if (nota >= 50.0 && nota < 70.0) {
        cout <<"Conceito C";
    }
    else if (nota >= 30.0 && nota < 50.0) {
        cout <<"Conceito D";
    }
    else if (nota >= 0.0 && nota < 30.0) {
        cout <<"Conceito E";
    }
    else {
        cout <<"Invalido!";
    }
return 0;
}