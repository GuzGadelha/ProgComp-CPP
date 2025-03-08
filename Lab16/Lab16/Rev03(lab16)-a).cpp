#include <iostream>
using namespace std;

void exibe(int[]);

int main() {
	system("chcp 1252 > nul");
	// Vetor
	int vet[5] = { 15, 2, 48, 10, 35 };
	// Função 
	exibe(vet);
	return 0;
}

void exibe(int vetFunc[5]) {

	if (vetFunc[0] == 15 && vetFunc[1] == 29 && vetFunc[2] == 48 && vetFunc[3] == 10 && vetFunc[4] == 35) {
		cout << "Vetor correto!\n";
		cout << vetFunc[0] << " ";
		cout << vetFunc[1] << " ";
		cout << vetFunc[2] << " ";
		cout << vetFunc[3] << " ";
		cout << vetFunc[4];
	}
	else {
		cout << "Vetor errado!";

	}
}