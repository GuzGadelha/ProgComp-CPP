#include <iostream>
#include <cstring>
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

void exibe(jogador[], int);

int main() {
	system("chcp 1252 > nul");
	// tamanho do vetor 
	cout << "Quantos jogadores tem no seu time? ";
	int tam;
	cin >> tam;
	// Vetor
	jogador * vet = new jogador[tam];
	// Lendo vetor
	cout << "---------------------------\n";
	cout << "Entre com os jogadores.\n";
	cout << "---------------------------\n";
	for (int i = 0; i < tam; i++) {
		cout << "Nome: ";
		cin.ignore();
		cin.getline(vet[i].nome, 20);
		cout << "Salário: R$";
		cin >> vet[i].salario;
		cout << "Quantidade de gols: ";
		cin >> vet[i].gols;
		cout << "---------------------------\n";
	}
	// Função 
	exibe(vet, tam);
	delete[] vet; // Free allocated memory
	return 0;
}

void exibe(jogador vetFunc[], int indice) {
	system("cls");
	cout << "Aqui está o seu time: \n";
	cout << "---------------------------\n";
	for (int i = 0; i < indice; i++) {
		cout << "Nome: " << vetFunc[i].nome << endl;
		cout << "Salário: R$" << vetFunc[i].salario << endl;
		cout << "Quantidade de gols: " << vetFunc[i].gols << endl;
		cout << "---------------------------\n";
	}
}