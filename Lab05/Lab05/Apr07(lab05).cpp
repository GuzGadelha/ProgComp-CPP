#include <iostream>
#include <cmath>
using namespace std;

float aoQuadra(float);
float aoCubo(float);

int main() {
	system("chcp 1252 > nul");
	// Entrada de dados, delcaração e leitura de variáveis
	cout << "Digite um valor: ";
	float num;
	cin >> num;
	// Chamda das funções 
	cout << "Quadrado: " << aoQuadra(num) << endl;
	cout << "Cubo: " << aoCubo(num) << endl;
	cout << "Cubo do quadrado: " << aoCubo(aoQuadra(num)) << endl;

	return 0;
}

float aoQuadra(float num) {
	// Inicializo a variável já calculando seu valor ao quadrado
	num = pow(num, 2);
	return num;
}

float aoCubo(float num) {
	// Inicializo a variável já calculando seu valor ao cubo
	num = pow(num, 3);
	return num;
}