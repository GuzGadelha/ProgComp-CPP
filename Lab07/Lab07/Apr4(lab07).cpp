#include <iostream>
using namespace std;

int bitsAltos(int);

int main() {
    system("chcp 1252 > nul");
    int numero;
    cout << "Digite um valor inteiro: ";
    cin >> numero;

    int resultado = bitsAltos(numero);
    cout << "Os 16 bits mais altos desse valor correspondem ao número " << resultado << "." << endl;

    return 0;
}
int bitsAltos(int numero) {
    int mascara = 0xFFFF0000; // A máscara em binario = 1111 1111 1111 1111 0000 0000 0000 0000
    return (mascara & numero) >> 16; 
}

