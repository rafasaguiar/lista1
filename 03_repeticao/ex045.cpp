#include <iostream>
using namespace std;

int main()
{
    float base, expoente;
    float resultado = 1;
    cout << "Digite o valor da base: ";
    cin >> base;
    cout << "Digite o valor do expoente: ";
    cin >> expoente;

    if (base == 0 && expoente == 0)
    {
        cout << "Indefinido";
    }
    else if (expoente == 1)
    {
        cout << "O resultado sera " << base << endl;
    }

    else if (expoente < 0)
    {
        int contador = 0;

        do
        {
            resultado = resultado * (1 / base);
            contador--;
        } while (contador > expoente);
        cout << "O resultado sera " << resultado << endl;
    }

    else if (base != 0 && expoente == 0)
    {
        cout << "O resultado sera 1." << endl;
    }
    else if (base !=0 && expoente != 0)
    {
        int contador = 0;

        do
        {
            resultado = resultado * base;
            contador++;
        } while (contador < expoente);
        cout << "O resultado sera: " << resultado << endl;
    }

    return 0;
}