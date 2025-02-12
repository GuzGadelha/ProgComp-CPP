#include <iostream>
#include <cmath>
using namespace std;

float emGraus(float, float);

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados
	cout << "Digite as coordenadas do vetor:\n";
	// Declara��o e leitura de vari�veis
	float x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y:";
	cin >> y;
	// Chamada da fun��o
	cout << "O �ngulo do vetor � " << emGraus(x, y) << "� graus.\n";

	return 0;
}

float emGraus(float x, float y) {
	float emRad;
	emRad = ((180 * (atan2(y, x)) / (atan(1)*4)));
	// a fun��o aplica a formula para transformar em radianos e dps em graus,
	// primeiro chamamos a fun��o atan2 para transformar os graus em radianos 
	// e depois multiplicamos por 180, depois dividimos por PI ou nesse caso atan(1)*4
	return emRad;
}