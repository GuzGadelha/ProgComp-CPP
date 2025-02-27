#include <iostream>
using namespace std;

struct rgba {
	short R;
	short G;
	short B;
	short A;
};

union cor {
	int cod32;
	rgba RGBa;
};

void ler(rgba*);
void ler32(int*);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	cor corUm;
	cor corDois;
	// Entrada
	cout << "Digite uma cor no formato" << endl;
	cout << "RGBA: ";
	ler(&corUm.RGBa);
	cout << "Int32: ";
	ler32(&corDois.cod32);
	return 0;
}

void ler (rgba* rgba) {
	cin >> rgba->R;
	cin >> rgba->G;
	cin >> rgba->B;
	cin >> rgba->A;
}

void ler32(int* int32) {
	cin >> *int32;
}