#include <iostream>
int main () {
    float n1, n2, n3, media;
    std::cout <<"Calculadora de media\n";
    std::cout <<"Digite a nota 1: ";
    std::cin >> n1;
    std::cout <<"Digite a nota 2: ";
    std::cin >> n2;
    std::cout <<"Digite a nota 3: ";
    std::cin >> n3;
    media = (n1 + n2 + n3)/3.0;
    std::cout <<"A media sera " << media << std::endl;
}