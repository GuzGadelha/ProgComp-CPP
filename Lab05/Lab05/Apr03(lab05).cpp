#include <iostream>
#include <cmath>
using namespace std;

float IMC(float, float);

int main() {
	system("chcp 1252 > nul");
	// Declara��o de vari�veis
	float mas, alt;
	// Entrada e Sa�da de dados
	cout << "�ndice de Massa Corporal (IMC)\n";
	cout << "-------------------------------\n";
	cout << "altura: "; cin >> alt;
	cout << "massa: "; cin>> mas;
	cout << "IMC: " << IMC(mas, alt) << endl;

	return 0;
}

float IMC(float mas, float alt) {
	// Fun��o faz a formula do IMC
	float imc = mas / pow(alt, 2); /// IMC = massa / (altura)�
	return imc;
}