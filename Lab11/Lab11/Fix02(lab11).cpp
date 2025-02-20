#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores e Variáveis
	char nome[35];
	char conc;
	// Entrada
	cout << "Qual é o nome? ";
	cin.getline(nome, 35);
	cout << "Que conceito você merece? ";
	cin >> conc;
	// Saída 
	cout << "Bom dia " << nome << ", seu conceito é " << char(conc + 1);
	return 0;
}