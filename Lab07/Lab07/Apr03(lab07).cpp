#include <iostream>
using namespace std;

unsigned int bitsBaixos(unsigned int);

int main() {
	system("chcp 1252 > nul");

	//Entrada de um valor unsigned int 
	cout << "Digite um valor inteiro: ";
	unsigned int num;
	cin >> num;
	//Chamada da função
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << bitsBaixos(num);

	return 0;
}

unsigned int bitsBaixos(unsigned int original) {
	// Mascara para executar o calculo, tem os primerios 16 zerados para isolarmos os ultimos 16
	unsigned int mask = 0b00000000000000001111111111111111;
	// AND bit a bit entre a mascara e o num/original, basicamente pensar q é uma multiplicação e zeramos todos os 16 bits da frente usando a mascara
	return mask & original;
}