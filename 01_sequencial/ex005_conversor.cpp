#include <iostream>
int main () {
    float m, cm;
    std::cout <<"Conversor de medidas metros/centimetros\n";
    std::cout <<"Insira aqui uma medida em metros: \n";
    std::cin >> m;
    cm = m * 100;
    std::cout <<"O valor de " << m << " metros, convertido em centimetros, sera de " << cm << " centimetros " << std::endl;
    return 0;
}