#include <iostream>
using namespace std;

int main() {
	//Para que seja poss�vel ler acentos
	system("chcp 1252 > nul");

	// Recendo o nome 
	cout << "Insira seu nome: ";
	char nome[25];
	cin.getline(nome, 25);
	// Recebendo endere�o
	cout << "Agora seu endere�o\nRua: ";
	char endereco[50];
	cin.getline(endereco, 50);
	// Limpando tela
	system("cls");
	// Exibindo o nome
	cout << nome << endl;
	// Exibindo o endere�o
	cout << endereco << endl;
}

// Usar o cin.getline faz voc� conseguir ler a linha inteira com espa�os
