#include <iostream>
using namespace std;
int main () {
    float c, f;
    cout <<"Conversor de temperaturas - Celsius para Farenheint\n";
    cout <<"Insira a temperatura em graus celsius que deseja transformar em farenheit:\n";
    cin >> c;
    f = (9 * c + 160)/5;
    cout <<"Em farenheit, a temperatura sera de " << f << " graus ";
    return 0;
}