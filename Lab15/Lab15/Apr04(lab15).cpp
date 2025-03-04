#include <iostream>
using namespace std;

struct local {
	char nome[50];
	char pais[10];
	char continente[20];
};

int main() {
	system("chcp 1252 > nul");
	// tamanho
	int tam;
	// Entrada
	cout << "Quantos países deseja conhecer? ";
	cin >> tam;
	// Memoria alocada
	local* pont = new local[tam];
	// Laço
	int i = 0;
	for (i = 0; i < tam; i++) {
		cout << "Qual seu nome? ";
		cin >> pont[i].nome;
		cout << "Qual o país? ";
		cin >> pont[i].pais;
		cout << "Qual o continente? ";
		cin >> pont[i].continente;
		cout << "--------------------------------\n";
	}

	// Mostrar os locais escolhidos
	cout << "\nLocais escolhidos:\n";
	for (i = 0; i < tam; i++) {
		cout << "Nome: " << pont[i].nome << ", País: " << pont[i].pais << ", Continente: " << pont[i].continente << endl;
	}

	// Libera a memória alocada
	delete[] pont;

	return 0;
}

/*
4. Crie um registro "Local" com os campos nome, país e continente. 
Pergunte ao usuário quantos locais ele quer visitar nas próximas férias e 
crie um vetor de locais alocando dinamicamente o espaço de acordo com quantos locais ele quer visitar.
Use um laço for para armazenar as informações dos locais que o usuário deseja visitar, 
e depois do armazenamento mostre os locais que ele escolheu. 
Libere o espaço alocado dinamicamente ao final do programa.
*/