#include <iostream>
#include <cmath>
using namespace std;

float aoQuadra(float);
float aoCubo(float);

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados, delcara��o e leitura de vari�veis
	cout << "Digite um valor: ";
	float num;
	cin >> num;
	// Chamda das fun��es 
	cout << "Quadrado: " << aoQuadra(num) << endl;
	cout << "Cubo: " << aoCubo(num) << endl;
	cout << "Cubo do quadrado: " << aoCubo(aoQuadra(num)) << endl;

	return 0;
}

float aoQuadra(float num) {
	// Inicializo a vari�vel j� calculando seu valor ao quadrado
	num = pow(num, 2);
	return num;
}

float aoCubo(float num) {
	// Inicializo a vari�vel j� calculando seu valor ao cubo
	num = pow(num, 3);
	return num;
}