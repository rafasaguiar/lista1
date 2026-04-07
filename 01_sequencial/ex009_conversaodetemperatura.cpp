#include <iostream>
using namespace std;
int main () {
    float c, f;
    cout <<"Conversor de temperaturas - Celsius para Farenheit\n";
    cout <<"Insira a temperatura em graus celsius que deseja transformar em farenheit:\n";
    cin >> f;
    c = (5.0 * (f - 32.0))/9;
    cout <<"Em celsius, a temperatura sera de " << c << " graus ";
    return 0;
}