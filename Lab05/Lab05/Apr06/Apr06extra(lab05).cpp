#include <iostream>
#include <cmath>
using namespace std;

void coorPol(float x, float y);
float distVet(float x, float y);
float emGraus(float x, float y);

void coorPol(float x, float y) {

	float tamanho = distVet(x, y);
	float angulo = emGraus(x, y);

	cout << "Coordenadas Polares do vetor:\n(" << tamanho << ", " << angulo << ")";
}

float distVet(float x, float y) {
	// Função executa a formula de calculo de um vetor
	// ∣v∣ = √x²+y²
	float v = sqrt(pow(x, 2) + pow(y, 2));

	return v;
}

float emGraus(float x, float y) {
	float emRad;
	emRad = ((180 * (atan2(y, x)) / (atan(1) * 4)));
	// a função aplica a formula para transformar em radianos e dps em graus,
	// primeiro chamamos a função atan2 para transformar os graus em radianos 
	// e depois multiplicamos por 180, depois dividimos por PI ou nesse caso atan(1)*4
	return emRad;
}
