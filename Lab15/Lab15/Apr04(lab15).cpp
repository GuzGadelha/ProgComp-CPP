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
	cout << "Quantos pa�ses deseja conhecer? ";
	cin >> tam;
	// Memoria alocada
	local* pont = new local[tam];
	// La�o
	int i = 0;
	for (i = 0; i < tam; i++) {
		cout << "Qual seu nome? ";
		cin >> pont[i].nome;
		cout << "Qual o pa�s? ";
		cin >> pont[i].pais;
		cout << "Qual o continente? ";
		cin >> pont[i].continente;
		cout << "--------------------------------\n";
	}

	// Mostrar os locais escolhidos
	cout << "\nLocais escolhidos:\n";
	for (i = 0; i < tam; i++) {
		cout << "Nome: " << pont[i].nome << ", Pa�s: " << pont[i].pais << ", Continente: " << pont[i].continente << endl;
	}

	// Libera a mem�ria alocada
	delete[] pont;

	return 0;
}

/*
4. Crie um registro "Local" com os campos nome, pa�s e continente. 
Pergunte ao usu�rio quantos locais ele quer visitar nas pr�ximas f�rias e 
crie um vetor de locais alocando dinamicamente o espa�o de acordo com quantos locais ele quer visitar.
Use um la�o for para armazenar as informa��es dos locais que o usu�rio deseja visitar, 
e depois do armazenamento mostre os locais que ele escolheu. 
Libere o espa�o alocado dinamicamente ao final do programa.
*/