#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variaveis e ponteiro
	double litros = 25.6589;
	double* pont = &litros;
	// Saída
	cout << "O valor de litros é " << *pont;

	return 0;
}