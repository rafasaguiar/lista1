#include <iostream>
using namespace std;
int main () {
    int num;
    cout <<"Numeros e meses do ano" << endl;
    cout <<"Insira um numero de 1 a 12" << endl;
    cin >> num;

    switch(num) {
        case 1:
        cout <<"1 - Janeiro";
        break;

        case 2:
        cout <<"2 - Fevereiro";
        break;

        case 3:
        cout <<"3 - Marco";
        break;

        case 4:
        cout <<"4 - Abril";
        break;

        case 5:
        cout <<"5 - Maio";
        break;

        case 6:
        cout <<"6 - Junho";
        break;

        case 7:
        cout <<"7 - Julho";
        break;

        case 8:
        cout <<"8 - Agosto";
        break;

        case 9:
        cout <<"9 - Setembro";
        break;

        case 10:
        cout <<"10 - Outubro";
        break;

        case 11:
        cout <<"11 - Novembro";
        break;

        case 12:
        cout <<"12 - Dezembro";
        break;

        default:
        cout << "Mes invalido!";
        break;
    }
return 0;
}