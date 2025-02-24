#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variavel e Vetores
	int num;
	int tam = 2;
	char numero[2];
	// Entrada
	cout << "Digite dois números: ";
	cin >> num >> numero;
	// Calculo
	num = num * atoi(numero);
	// Saída 
	cout << "A multiplicação entre eles é: " << num;

	return 0;
}