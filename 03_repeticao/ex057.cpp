#include <iostream>
using namespace std;

int main () {
    float soma = 0;
    int pessoas, idade;
    double media;
    int contador = 1;

    cout <<"Quantas pessoas farao parte da pesquisa? ";
    cin >> pessoas;
    do {
        cout <<"Digite a idade: ";
        cin >> idade;
        soma = soma + idade;
        contador++;
     } while (contador <= pessoas);

    media = soma / pessoas;
    cout <<"A media das idades sera: " << media << endl;

    if (media >= 0 && media < 26) {
        cout <<"A turma e jovem" << endl;
    }
    else if (media >= 26 && media < 60) {
        cout <<"A turma e adulta" << endl;
    }
    else {
        cout <<"A turma e idosa" << endl;
    }

return 0;
}