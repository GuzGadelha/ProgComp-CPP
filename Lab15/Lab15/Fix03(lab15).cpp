#include <iostream>
using namespace std;

struct carros {
	char modelo[10];
	unsigned int anoFab;
	float preco;
};

int main() {
	system("chcp 1252 > nul");
	// Vetor e Ponteiro
	carros vet[10];
	vet[0] = { "Vectra", 2009, 58.000 };
	vet[1] = { "Polo", 2008, 45.000 };
	carros* pont = vet;
	// Sa�da
	cout << "Modelo: " << pont[1].modelo << endl;
	cout << "Ano de fabrica��o: " << pont[1].anoFab << endl;
	// Configura��o do cout para sair tres numeros ap�s o ponto
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << "Pre�o: R$" << pont[1].preco;
	return 0;
}
