#include <iostream>
#include <cctype>
using namespace std;
int main () {
    char letra;
    cout <<"Verificador de vogal ou consoante\n";
    cout <<"Digite uma letra:\n";
    cin >> letra;
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout <<"Voce digitou uma vogal";
    }
    else if (letra >= 'a' && letra <= 'z') {
        cout <<"Voce digitou uma consoante";
    }
    else {
        cout <<"Invalido!";
    }
    return 0;
}