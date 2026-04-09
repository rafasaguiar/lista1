#include <iostream>
using namespace std;
int main () {
    float salariohora, horas, salariobruto, ir, inss, fgts, totaldesc, salarioliq;
    cout<<"Calculadora de descontos sobre salario\n";
    cout<<"Digite seu salario por hora trabalhada em reais: ";
    cin >> salariohora;
    cout<<"Digite a quantidade mensal de horas trabalhadas: ";
    cin >> horas;
    salariobruto = salariohora * horas;
    inss = salariobruto * 0.10;
    fgts = salariobruto * 0.11;

    if (salariobruto <= 2500.00 && salariobruto >= 0.00) {
        cout <<"\nSalario bruto: " << salariobruto;
        ir = salariobruto * 0.00;
        cout <<"\n(-) IR (0%): " << ir;
        cout <<"\n(-) INSS (10%): " << inss;
        cout <<"\nFGTS (11%): " << fgts;
        totaldesc = ir + inss;
        cout <<"\nTotal de descontos: " << totaldesc;
        salarioliq = salariobruto - (inss + ir);
        cout <<"\nSalario Liquido: " << salarioliq;
    }
    else if (salariobruto > 2500.00 && salariobruto <= 3500.00) {
        cout <<"\nSalario bruto: " << salariobruto;
        ir = salariobruto * 0.05;
        cout <<"\n(-) IR (5%): " << ir;
        cout <<"\n(-) INSS (10%): " << inss;
        cout <<"\nFGTS (11%): " << fgts;
        totaldesc = ir + inss;
        cout <<"\nTotal de descontos: " << totaldesc;
        salarioliq = salariobruto - (inss + ir);
        cout <<"\nSalario Liquido: " << salarioliq;
    }
    else if (salariobruto > 3500.00 && salariobruto <= 5500.00) {
        cout <<"\nSalario bruto: " << salariobruto;
        ir = salariobruto * 0.10;
        cout <<"\n(-) IR (10%): " << ir;
        cout <<"\n(-) INSS (10%): " << inss;
        cout <<"\nFGTS (11%): " << fgts;
        totaldesc = ir + inss;
        cout <<"\nTotal de descontos: " << totaldesc;
        salarioliq = salariobruto - (inss + ir);
        cout <<"\nSalario Liquido: " << salarioliq;
    }
    else {
        cout <<"\nSalario bruto: " << salariobruto;
        ir = salariobruto * 0.20;
        cout <<"\n(-) IR (20%): " << ir;
        cout <<"\n(-) INSS (10%): " << inss;
        cout <<"\nFGTS (11%): " << fgts;
        totaldesc = ir + inss;
        cout <<"\nTotal de descontos: " << totaldesc;
        salarioliq = salariobruto - (inss + ir);
        cout <<"\nSalario Liquido: " << salarioliq;
    }
return 0;
}