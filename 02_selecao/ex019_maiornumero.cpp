#include <iostream>
using namespace std;
int main () {
    float n1, n2, n3;
    cout <<"Digite aqui um numero real qualquer: ";
    cin >> n1;
    cout <<"Digite aqui outro numero real qualquer: ";
    cin >> n2;
    cout <<"Digite mais um numero real qualquer: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3) {
        cout <<"O maior numero e " << n1;
    }
    else if (n2 >= n1 && n2 >= n3) {
        cout <<"O maior numero e " << n2;
    }
    else {
        cout <<"O maior numero e " << n3;
    }

return 0;    
}