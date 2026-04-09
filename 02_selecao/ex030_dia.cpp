#include <iostream>
using namespace std;
int main () {
    int num;
    cout <<"Numeros e dias da semana" << endl;
    cout <<"Insira um numero de 1 a 7" << endl;
    cin >> num;

    if (num == 1) {
        cout <<"1 - domingo";
    }
    else if (num == 2) {
        cout <<"2 - segunda-feira";
    }
    else if (num == 3) {
        cout <<"3 - terca-feira";
    }
    else if (num == 4) {
        cout <<"4 - quarta-feira";
    }
    else if (num == 5) {
        cout <<"5 - Quinta-feira";
    }
    else if (num == 6) {
        cout <<"6 - Sexta-feira";
    }
    else if (num == 7){
        cout <<"7 - sabado";
    }
    else {
        cout <<"Invalido!";
    }
return 0;
}