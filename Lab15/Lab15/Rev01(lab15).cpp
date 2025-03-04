#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite o valor de tam: ";
	int tam; cin >> tam;
	int* vet = new int[tam];
	cout << "Criando um vetor para " << tam << " inteiros.";
	delete[] vet;
	return 0;
}