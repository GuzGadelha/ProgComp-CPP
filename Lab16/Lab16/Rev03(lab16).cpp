#include <iostream>
using namespace std;

void exibe(int[]);

int main() {
	system("chcp 1252 > nul");
	// Vetor
	int vet[5] = {15, 29, 48, 10, 35};
	// Função 
	exibe(vet);
	return 0;
}

void exibe(int vetFunc[5]) {
	cout << vetFunc[0] << " " << vetFunc[1] << " " << vetFunc[2] << " " << vetFunc[3] << " " << vetFunc[4];
}