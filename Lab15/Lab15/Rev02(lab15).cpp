#include <iostream>
using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	unsigned comp;
};

int main() {
	system("chcp 1252 > nul");
	// Variaveis de Ponteiros
	peixe piabinha = { "Piaba", 2.3, 1 };
	peixe* pont = new peixe;
	// Atribui��o de valores em uma memoria alocada din�micamente
	*pont = { "Salm�o", 23.5, 4 };
	// Sa�da
	cout << "Ponteiro din�mico: " << pont->tipo << " " << pont->peso << " " << pont->comp << endl;
	cout << "Normal: " << piabinha.tipo << " " << piabinha.peso << " " << piabinha.comp;
	delete pont;
	return 0;
}