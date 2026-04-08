#include <iostream>
using namespace std;
int main () {
    char letra;
    cout <<"Em qual periodo do dia voce estuda? Digite: M (matutino), V (Vespertino) ou N (Noturno).\n";
    cin >> letra;

    if (letra == 'M' || letra == 'm') {
        cout <<"Bom dia!";
    }
    else if (letra == 'V' || letra == 'v') {
        cout <<"Boa tarde!";
    }
    else if (letra == 'N' || letra == 'n') {
        cout <<"Boa noite!";
    }
    else {
        cout <<"Invalido!";
    }
    return 0;
}