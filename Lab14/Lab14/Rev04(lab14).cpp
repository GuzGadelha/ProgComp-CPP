#include <iostream>
using namespace std;

struct peixe {
	char tipo[15];
	float peso;
	int comprimento;
};

void exibirSem(peixe);
void exibirCom(peixe*);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	peixe piabinha = { "Piaba", 6.2, 5 };
	peixe * pont = &piabinha;	
	// Output
	exibirSem(piabinha);
	exibirCom(pont);
	return 0;
}

void exibirSem(peixe p) {
	cout << "Sem ponteiro: " << p.tipo << " com " << p.peso << "g e " << p.comprimento << "cm" << endl;
}

void exibirCom( peixe * p ) {
	cout << "Com ponteiro: " << p->tipo << " com " << p->peso << "g e " << p->comprimento << "cm" << endl;
}