#include <iostream>
#include <cmath>
using namespace std;

float IMC(float, float);

int main() {
	system("chcp 1252 > nul");
	// Declaração de variáveis
	float mas, alt;
	// Entrada e Saída de dados
	cout << "Índice de Massa Corporal (IMC)\n";
	cout << "-------------------------------\n";
	cout << "altura: "; cin >> alt;
	cout << "massa: "; cin>> mas;
	cout << "IMC: " << IMC(mas, alt) << endl;

	return 0;
}

float IMC(float mas, float alt) {
	// Função faz a formula do IMC
	float imc = mas / pow(alt, 2); /// IMC = massa / (altura)²
	return imc;
}