#include <iostream>
using namespace std;

void exibe(int[], int);

int main() {
	system("chcp 1252 > nul");
	// tamanho do vetor 
	int tam;
	cout << "Quantos numeros quer armazenar?\n";
	cin >> tam;
	// Vetor
	int* vet = new int[tam];
	// Lendo vetor
	cout << "Digite os valores do vetor: ";
	int i = 0;
	for (i = 0; i < tam; i++)
		cin >> vet[i];
	// Função 
	exibe(vet, tam);
	return 0;
}

void exibe(int vetFunc[], int indice) {
	cout << "O vetor escolhido foi: \n";
	int i = 0;
	for (i = 0; i < indice; i++) {
		cout << vetFunc[i] << " ";
	}
}