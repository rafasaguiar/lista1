#include <iostream>
using namespace std;
int main () {
    float c, f;
    cout <<"Conversor de temperaturas - Farenheit para Celsius\n";
    cout <<"Insira a temperatura em graus farenheit que deseja transformar em celsius:\n";
    cin >> f;
    c = (5.0 * (f - 32.0))/9;
    cout <<"Em celsius, a temperatura sera de " << c << " graus ";
    return 0;
}