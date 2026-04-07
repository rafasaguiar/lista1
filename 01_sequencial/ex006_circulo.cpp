#include <iostream>
int main () {
    float raio, area;
    std::cout <<"Calculadora de areas circulares\n";
    std::cout <<"Insira aqui o raio, em metros, do circulo: \n";
    std::cin >> raio;
    area = raio * raio * 3.14;
    std::cout <<"A area do circulo sera de, aproximadamente, " << area << " metros quadrados. " << std::endl;
    return 0;
}