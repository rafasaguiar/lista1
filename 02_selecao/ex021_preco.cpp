#include <iostream>
using namespace std;
int main () {
    float p1, p2, p3;
    cout <<"Escolha o produto mais barato\n";
    cout <<"Digite o valor do produto da marca A: ";
    cin >> p1;
    cout <<"Digite o valor do produto da marca B: ";
    cin >> p2;
    cout <<"Digite o valor do produto da marca C: ";
    cin >> p3;

    if (p1 <= p2 && p1 <= p3) {
        cout <<"E mais vantajoso comprar o produto da marca A";
    }
    else if (p2 <= p1 && p2 <= p3) {
        cout <<"E mais vantajoso comprar o produto da marca B";
    }
    else {
        cout <<"E mais vantajoso comprar o produto da marca C";
    }

return 0;    
}