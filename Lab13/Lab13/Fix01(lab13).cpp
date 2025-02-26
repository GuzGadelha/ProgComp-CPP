#include <iostream>
using namespace std;

union cores {
	char nome[10];
	int num;
	char codigo[15];
};

struct carros {
	char modelo[15];
	int anoFabricacao;
	cores cor;
	double preco;
};

int main() {
	system("chcp 1252 > nul");
	// Vetor
	carros vet[3];
	// inicialização
	vet[0] = { "Vectra", 2009, "Azul", 58.000 };
	vet[1] = { "Polo", 2008, "Preto", 45.000 };
	// Entrada
	cout << "Modelo: ";
	cin >> vet[2].modelo;
	cout << "Ano de fabricação: ";
	cin >> vet[2].anoFabricacao;
	cout << "Preço: ";
	cin >> vet[2].preco;
	cout << "Cor (em codigo): ";
	cin >> vet[2].cor.codigo;
	system("cls");
	// Saída
	cout << "Primeiro carro" << endl;
	cout << "Modelo: " << vet[0].modelo << endl;
	cout << "Ano de fabricação: " << vet[0].anoFabricacao << endl;
	cout << "Preço: " << vet[0].preco << endl;
	cout << "Cor: " << vet[0].cor.codigo << endl;
	cout << "--------------------------------------" << endl;
	cout << "Segundo carro" << endl;
	cout << "Modelo: " << vet[1].modelo << endl;
	cout << "Ano de fabricação: " << vet[1].anoFabricacao << endl;
	cout << "Preço: " << vet[1].preco << endl;
	cout << "Cor: " << vet[1].cor.codigo << endl;
	cout << "--------------------------------------" << endl;
	cout << "Terceiro carro" << endl;
	cout << "Modelo: " << vet[2].modelo << endl;
	cout << "Ano de fabricação: " << vet[2].anoFabricacao << endl;
	cout << "Preço: " << vet[2].preco << endl;
	cout << "Cor: " << vet[2].cor.codigo << endl;
	return 0;
}