#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// variavel inteira do tamanho
	int tam;
	// Entrada tamanho
	cout << "Quantos valores deseja guardar? ";
	cin >> tam;
	// Vetor din�mico
	int* pont = new int[tam];
	// Entrada
	cout << "Quais os valores?";
	// La�o de repeti��o para recber os valores
	int i = 0;
	for (i = 0; i < tam; i++) 
		cin >> pont[i];
	for (i = 0; i < tam; i++)
		cout << pont[i];
	delete[] pont;

	return 0;
}