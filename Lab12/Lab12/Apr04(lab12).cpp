#include <iostream>
using namespace std;

struct livro {
	char titulo[20];
};
struct jogo {
	char nome[20];
};

void exibe();

int main() {
	system("chcp 1252 > nul");

	srand(1);
	livro alugar[30];
	jogo emprestar[30];
	bool resposta;

	cout << "Voce deseja um livro ou um jogo?\n";
	cout << "Livro[1]\n";
	cout << "Jogo[0]\n";
	cin >> resposta;
	cin.get();

	if (resposta == 1) {
		cout << "Qual o titulo? ";
		cin.getline(alugar[0].titulo, 20);

		system("cls");
		cout << alugar[0].titulo;
		cout << "\nNumero de paginas: " << rand();
		cout << "\nEMPRESTADO!";

	}
	if (resposta == 0) {
		cout << "Qual o nome? ";
		cin.getline(emprestar[0].nome, 20);

		system("cls");
		cout << emprestar[0].nome;
		cout << "\nHoras de jogo: " << rand();
		cout << "EMPRESTADO!";
	}
	return 0;
}