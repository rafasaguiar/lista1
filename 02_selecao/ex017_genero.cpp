#include <iostream>
using namespace std;
int main () {
    char letra;
    cout <<"Insira aqui o seu genero (M ou F): ";
    cin >> letra;
    if (letra == 'M' || letra == 'm') {
        cout <<"Genero Masculino";
    }
    else if (letra == 'F' || letra == 'f') {
        cout <<"Genero Feminino";
    }
    else {
        cout <<"Genero nao informado";
    }

return 0;
}