#include <iostream>
using namespace std;
int main () {
    float salario, horas, salariobruto, ir, inss, sind, salarioliq;
    cout <<"Calculadora de descontos no salario\n";
    cout <<"Insira aqui o seu salario bruto, por hora, em reais: \n";
    cin >> salario;
    cout <<"Insira aqui o numero de horas que voce trabalha por mes: \n";
    cin >> horas;
    salariobruto = salario * horas;
    cout <<"Seu salario bruto sera: "<< salariobruto <<endl;
    ir = salariobruto * 0.11;
    cout <<"O desconto de imposto de renda sera de: " << ir << endl;
    inss = salariobruto * 0.08;
    cout <<"O desconto de INSS sera de: " << inss << endl;
    sind = salariobruto * 0.05;
    cout <<"O desconto de sindicato sera de: " << sind << endl;
    salarioliq = salariobruto - (ir + inss + sind);
    cout <<"Seu salario liquido sera, apos os decontos, de: " <<salarioliq << endl;
    return 0;
}