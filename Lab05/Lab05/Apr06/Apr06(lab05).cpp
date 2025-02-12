#include <iostream>
#include "Apr06extra(lab05).h"
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados
	float x, y;
	cout << "digite coordenadas X e Y de um ponto no plano\n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	// Chamada da função que chama todas as outras
	coorPol(x, y);

	return 0;
}
