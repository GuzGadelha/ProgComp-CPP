#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variavel e Vetores
	int num;
	string numero;
	// Entrada
	cout << "Digite dois n�meros: ";
	cin >> num >> numero;
	// Calculo
	num = num * numero[0];
	// Sa�da 
	cout << "A multiplica��o entre eles �: " << num;


	return 0;
}