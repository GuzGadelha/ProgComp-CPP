#include <iostream>
using namespace std;

double calcular(double, double, double);

int main() {
	system("chcp 1252 > nul");
	// Vetor
	double vetorDb[3];
	// Entrada 
	cout << "Entre com 3 valores: ";
	cin >> vetorDb[0] >> vetorDb[1] >> vetorDb[2];
	// Saída e Chamada de função
	cout << "Resultado: " << calcular(vetorDb[0], vetorDb[1], vetorDb[2]);

	return 0;
}

double calcular(double valor1, double valor2, double valor3) {
	return valor1 * valor3 - valor2;
}