#include <iostream>
using namespace std;
int main () {
    int x, y;
    float a, b, c, z;
    cout <<"Calculadora de multiplicacoes\n";
    cout <<"Insira um numero inteiro:\n ";
    cin >> x;
    cout <<"Insira outro numero inteiro:\n ";
    cin >> y;
    cout <<"Insira um numero real qualquer:\n ";
    cin >> z;
    a = (2 * x) * (y/2.0);
    cout <<"o produto do dobro do primeiro com metade do segundo sera\n " << a << endl;
    b = (3 * x) + z;
    cout <<"a soma do triplo do primeiro com o terceiro sera:\n " << b << endl;
    c = z * z * z;
    cout <<"O terceiro elevado ao cubo sera:\n " << c << endl;
    return 0;
}