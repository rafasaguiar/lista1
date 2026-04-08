#include <iostream>
using namespace std;
int main () {
    float tamanhomb, velocidadeinternet, temposeg, tempomin;
    cout <<"Insira aqui o tamanho, em MB, do arquivo: ";
    cin >> tamanhomb;
    cout <<"Insira aqui a velocidade da sua internet, em Mbps: ";
    cin >> velocidadeinternet;
    temposeg = tamanhomb / (velocidadeinternet/8.0); // 1 byte = 8 bits. Velocidade está em Mbps, então faço isso para achar o tempo em seg.
    tempomin = temposeg / 60.0;
    cout <<"O tempo estimado para download do arquivo sera de " << tempomin << " minutos." <<endl;
return 0;
}