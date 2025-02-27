#include <iostream>
using namespace std;

struct peixe {
	char tipo[15];
	float peso;
	int comprimento;
};

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	peixe piabinha;				// letra a)
	peixe* pont = &piabinha;	// letra b)

	return 0;
}