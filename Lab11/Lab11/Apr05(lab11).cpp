#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Strings
	const int tam = 50;
	char nomePrimeiro[tam];
	char nomeSegundo[tam];
	// Entrada
	cout << "Digite seu nome e sobrenome: ";
	cin >> nomePrimeiro >> nomeSegundo;
	// Sa�da
	cout << "Bom dia senhor, " << nomeSegundo << ". Ou devo cham�-lo de " << nomePrimeiro << "?";

	return 0;
}