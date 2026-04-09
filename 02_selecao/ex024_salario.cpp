#include <iostream>
using namespace std;
int main () {
    float salarioatual, percentual, aumento, salarionovo; 
    cout <<"Calculadora de reajuste salarial\n";
    cout <<"Digite aqui o seu salario atual: \n";
    cin >> salarioatual;
    if (salarioatual <= 1280.00 && salarioatual >= 0) {
        salarionovo = salarioatual * 1.2;
        aumento = salarionovo - salarioatual;
        cout <<"\nSeu salario era de: " << salarioatual << " reais ";
        cout <<"\nO percentual de reajuste foi de: 20%";
        cout <<"\nO valor do aumento foi de: " << aumento << " reais ";
        cout <<"\nSeu novo salario sera de: " << salarionovo << " reais ";
    }
    else if (salarioatual > 1280.00 && salarioatual <= 1700.00) {
       salarionovo = salarioatual * 1.15;
        aumento = salarionovo - salarioatual;
        cout <<"\nSeu salario era de: " << salarioatual << " reais ";
        cout <<"\nO percentual de reajuste foi de: 15%";
        cout <<"\nO valor do aumento foi de: " << aumento << " reais ";
        cout <<"\nSeu novo salario sera de: " << salarionovo << " reais "; 
    }
    else if (salarioatual > 1700.00 && salarioatual <= 2500.00) {
        salarionovo = salarioatual * 1.1;
        aumento = salarionovo - salarioatual;
        cout <<"\nSeu salario era de: " << salarioatual << " reais ";
        cout <<"\nO percentual de reajuste foi de: 10%";
        cout <<"\nO valor do aumento foi de: " << aumento << " reais ";
        cout <<"\nSeu novo salario sera de: " << salarionovo << " reais ";
    }
    else if (salarioatual > 2500.00) {
        salarionovo = salarioatual * 1.05;
        aumento = salarionovo - salarioatual;
        cout <<"\nSeu salario era de: " << salarioatual << " reais ";
        cout <<"\nO percentual de reajuste foi de: 5%";
        cout <<"\nO valor do aumento foi de: " << aumento << " reais ";
        cout <<"\nSeu novo salario sera de: " << salarionovo << " reais ";
    }
    else {
        cout <<"\nValor invalido!";
    }
return 0;    
}