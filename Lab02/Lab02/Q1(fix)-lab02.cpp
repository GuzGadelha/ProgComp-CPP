#include <iostream>
using namespace std;

int main() {
	//Para que seja possível ler acentos
	system("chcp 1252 > nul");

	// Recendo o nome 
	cout << "Insira seu nome: ";
	char nome[25];
	cin.getline(nome, 25);
	// Recebendo endereço
	cout << "Agora seu endereço\nRua: ";
	char endereco[50];
	cin.getline(endereco, 50);
	// Limpando tela
	system("cls");
	// Exibindo o nome
	cout << nome << endl;
	// Exibindo o endereço
	cout << endereco << endl;
}

// Usar o cin.getline faz você conseguir ler a linha inteira com espaços
