#include <iostream>
#include <cmath>
using namespace std;

double grau, rad;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um �ngulo: ";
	cin >> grau;

	rad = (grau * (4 * atan(1)) / 180;
	// chamada de fun��o
	cout << "seno = " << sin(rad);
	return 0;
}

// 4*atan(1) � uma defini��o de PI em C++
// para calcular o seno eu preciso do valor em radianos, 
// para isso eu preciso passar pela seguinte formula:
// RADIANOS = GRAUS X PI / 180
// Por isso a linha 13 do c�digo
// Depois � s� chamar a fun��o e tudo fica de boa