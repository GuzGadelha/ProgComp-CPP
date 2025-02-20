#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	int vetorSoma[5];
	// Entrada
	cout << "Digite 5 valores: ";
	cin >> vetorSoma[0] >> vetorSoma[1] >> vetorSoma[2] >> vetorSoma[3] >> vetorSoma[4];
	// Saída 
	cout << "A soma do vetor é " << vetorSoma[0] + vetorSoma[1] + vetorSoma[2] + vetorSoma[3] + vetorSoma[4];
	return 0;
}