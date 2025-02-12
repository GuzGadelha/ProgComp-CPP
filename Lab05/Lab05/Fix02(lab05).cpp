#include <iostream>
using namespace std;

float converte(float);

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados
	cout << "Digite uma temperatura em graus Celsius: ";
	float cel;
	cin >> cel;
	// chamada d função
	converte(cel);
	return 0;
}

float converte(float cel) {
	// função faz a formula de celsius para fahrenheit
	float fah; // variavel do valor em fahreinheit
	fah = 1.8 * cel + 32; // formula : fahreinheit = 1.8(ou 9/5) * celsius + 32

	cout << cel << " graus Celsius equivalem a " << fah << " graus Fahrenheit.\n";

	return fah;
}