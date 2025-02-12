#include <iostream>
#include <cmath>
using namespace std;

double grau, rad;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um ângulo: ";
	cin >> grau;

	rad = (grau * (4 * atan(1)) / 180;
	// chamada de função
	cout << "seno = " << sin(rad);
	return 0;
}

// 4*atan(1) é uma definição de PI em C++
// para calcular o seno eu preciso do valor em radianos, 
// para isso eu preciso passar pela seguinte formula:
// RADIANOS = GRAUS X PI / 180
// Por isso a linha 13 do código
// Depois é só chamar a função e tudo fica de boa