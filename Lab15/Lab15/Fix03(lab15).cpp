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
	// Saída
	cout << "Modelo: " << pont[1].modelo << endl;
	cout << "Ano de fabricação: " << pont[1].anoFab << endl;
	// Configuração do cout para sair tres numeros após o ponto
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << "Preço: R$" << pont[1].preco;
	return 0;
}
