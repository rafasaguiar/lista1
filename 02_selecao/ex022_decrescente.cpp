#include <iostream>
using namespace std;
int main () {
    float n1, n2, n3;
    cout <<"Digite um numero real qualquer: ";
    cin >> n1;
    cout <<"Digite outro numero real qualquer: ";
    cin >> n2;
    cout <<"Digite mais um numero real qualquer: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3 && n2 >= n3) {
        cout <<"Numeros em ordem decrescente: " << n1 << " " << n2 << " " << n3;
    }
    else if (n1 >= n2 && n1 >= n3 && n3 >= n2) {
        cout <<"Numeros em ordem decrescente: " << n1 << " " << n3 << " " << n2;
    }
    else if (n2 >= n1 && n2 >= n3 && n1 >= n3) {
        cout <<"Numeros em ordem decrescente: " << n2 << " " << n1 << " " << n3;
    }
    else if (n2 >= n1 && n2 >= n3 && n3 >= n1) {
        cout <<"Numeros em ordem decrescente: " << n2 << " " << n3 << " " << n1;
    }
    else if (n3 >= n1 && n3 >= n2 && n1 >= n2) {
        cout <<"Numeros em ordem decrescente: " << n3 << " " << n1 << " " << n2;
    }
    else {
        cout <<"Numeros em ordem decrescente: " << n3 << " " << n2 << " " << n1;
    }
    return 0;
}