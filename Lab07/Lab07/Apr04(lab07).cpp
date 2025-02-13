#include <iostream>
using namespace std;

unsigned int bitsAltos(unsigned int);

int main() {
    system("chcp 1252 > nul");

    cout << "Digite um valor inteiro: ";
    unsigned int num;
    cin >> num;
    cout << "Os 16 bits mais altos desse valor correspondem ao número " << bitsAltos(num);

    return 0;
}

unsigned int bitsAltos(unsigned int original) {
    unsigned int mask = 0b1111'1111'1111'1111'0000'0000'0000'0000;
    return (original & mask) >> 16;
}
// Mesma coisa do exercício passado com as duas UNICAS diferença de:
// 1° - A máscara agora é 0b1111'1111'1111'1111'0000'0000'0000'0000
// 2° - Agora é necessario um shift de 16 bits, para que os bits mais altos fiquem na posição correta