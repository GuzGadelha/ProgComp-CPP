#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Ponteiro 
	int* pont = new int;
	*pont = 100;
	// Valor atual
	cout << "Conte�do guardado: " << *pont;
	// Mudan�a de valor
	cout << "\nDigite um novo valor para esse bloco de memoria: ";
	cin >> *pont;
	// novo valor
	cout << "Novo valor: " << *pont;
	return 0;
}