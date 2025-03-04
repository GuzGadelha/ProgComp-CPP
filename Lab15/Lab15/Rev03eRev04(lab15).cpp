#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

void exibir(peixe*);

int main() {
	system("chcp 1252 > nul");
	// Entrada
	cout << "Tamanho do vetor: ";
	int tam; cin >> tam;
	// Vetor 
	peixe* pont = new peixe[tam];
	// Entrada
	cout << "Tipo: ";
	cin >> pont->tipo;		// Pode ser de um desses dois jeitos
	cout << "Peso: ";
	cin >> pont[0].peso;	// Este
	cout << "Comprimento: ";
	cin >> pont->comp;		// Ou este
	// Saída
	cout << "O peso do peixe é "; 
	exibir(pont); 
	cout << " gramas";
	delete[] pont;
	return 0;
}

void exibir(peixe* pont) {
	cout << pont[0].peso;
}