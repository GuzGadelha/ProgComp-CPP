#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores e Vari�veis
	char nome[35];
	char conc;
	// Entrada
	cout << "Qual � o nome? ";
	cin.getline(nome, 35);
	cout << "Que conceito voc� merece? ";
	cin >> conc;
	// Sa�da 
	cout << "Bom dia " << nome << ", seu conceito � " << char(conc + 1);
	return 0;
}