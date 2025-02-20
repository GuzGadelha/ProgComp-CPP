#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variavel e Vetores
	int num;
	string numero;
	// Entrada
	cout << "Digite dois números: ";
	cin >> num >> numero;
	// Calculo
	num = num * numero[0];
	// Saída 
	cout << "A multiplicação entre eles é: " << num;


	return 0;
}