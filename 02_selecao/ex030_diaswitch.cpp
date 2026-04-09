#include <iostream>
using namespace std;
int main () {
    int num;
    cout <<"Numeros e dias da semana" << endl;
    cout <<"Insira um numero de 1 a 7" << endl;
    cin >> num;

    switch(num) {
        case 1:
        cout <<"1 - Domingo";
        break;

        case 2:
        cout <<"2 - Segunda-feira";
        break;

        case 3:
        cout <<"3 - Terca-feira";
        break;

        case 4:
        cout <<"4 - Quarta-feira";
        break;

        case 5:
        cout <<"5 - Quinta-feira";
        break;

        case 6:
        cout <<"6 - Sexta-feira";
        break;

        case 7:
        cout <<"7 - sabado";
        break;

        default:
        cout << "Invalido!";
        break;
    }
return 0;
}