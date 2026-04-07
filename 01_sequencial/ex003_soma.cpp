#include<iostream>
int main () {
    int n1, n2, soma;
    std::cout <<"Escolha um numero: ";
    std::cin >> n1;
    std::cout <<"Escolha outro numero: ";
    std::cin >> n2;
    soma = n1 + n2;
    std::cout <<"A soma entre " << n1 << " e " << n2 << " e igual a " << soma << std::endl;
}