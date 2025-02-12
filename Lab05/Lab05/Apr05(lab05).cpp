#include <iostream>
#include <cmath>
using namespace std;

float emGraus(float, float);

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados
	cout << "Digite as coordenadas do vetor:\n";
	// Declaração e leitura de variáveis
	float x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y:";
	cin >> y;
	// Chamada da função
	cout << "O ângulo do vetor é " << emGraus(x, y) << "° graus.\n";

	return 0;
}

float emGraus(float x, float y) {
	float emRad;
	emRad = ((180 * (atan2(y, x)) / (atan(1)*4)));
	// a função aplica a formula para transformar em radianos e dps em graus,
	// primeiro chamamos a função atan2 para transformar os graus em radianos 
	// e depois multiplicamos por 180, depois dividimos por PI ou nesse caso atan(1)*4
	return emRad;
}