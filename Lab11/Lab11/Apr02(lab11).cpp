#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variavel e Vetores
	int num;
	int tam = 2;
	char numero[2];
	// Entrada
	cout << "Digite dois n�meros: ";
	cin >> num >> numero;
	// Calculo
	num = num * atoi(numero);
	// Sa�da 
	cout << "A multiplica��o entre eles �: " << num;

	return 0;
}