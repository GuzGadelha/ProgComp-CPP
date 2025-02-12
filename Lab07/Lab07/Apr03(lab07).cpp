#include <iostream>
using namespace std;

unsigned int bitsBaixos(unsigned int);

int main() {
    system("chcp 1252 > nul");
    // Entrada de um número inteiro 
    unsigned int numero;
    cout << "Digite um valor inteiro: ";
    cin >> numero;
    // Saída da função
    unsigned int resultado = bitsBaixos(numero);
    cout << "Os 16 bits mais baixos desse valor correspondem ao número " << resultado << endl;

    return 0;
}
unsigned int bitsBaixos(unsigned int numero) {
    numero = (numero << 16);
    return numero >> 16; 
/*
Jogar do precipicio ( de andre lima):
desloco para a esquerda para zerar os 16 mais altos
depois desloco para esquerda, assimo zero os 16 primeiros e conservo os 16 que eu quero
*/
}



