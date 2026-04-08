#include <iostream>
using namespace std;
int main () {
    float n1, n2;
    cout <<"Insira um numero real qualquer: ";
    cin >> n1;
    cout <<"Insira outro numero real qualquer: ";
    cin >> n2;
    if (n1 > n2) {
        cout <<"O maior numero e: " << n1;
    }
    else {
        cout <<"O maior numero e: " << n2;
    }
return 0;
}