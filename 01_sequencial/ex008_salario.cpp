#include <iostream>
using namespace std;
int main () {
    float horas, valordahora, salario; 
    cout <<"Calculadora de salario/hora \n";
    cout <<"Quantas horas voce trabalha por mes? \n";
    cin >> horas;
    cout <<"Qauanto voce ganha por hora trabalhada, em reais? \n";
    cin >> valordahora;
    salario = horas * valordahora;
    cout <<"Voce ganha, por mes, " << salario << " reais." << endl;
    return 0;
}