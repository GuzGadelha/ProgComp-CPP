#include <iostream>
#include <cmath>
using namespace std;

float distVet(float, float);

int main() {
	system("chcp 1252 > nul");
	// Declaração de variáveis
	float x, y;
	// Entrada de dados
	cout << "Digite coordenadas do vetor:\n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	//Chamada de função
	distVet(x, y);

	return 0;
}

float distVet(float x, float y) {
	// Função executa a formula de calculo de um vetor
	// ∣v∣ = √x²+y²
	double v = sqrt(pow(x, 2) + pow(y, 2));

	cout << "\nO tamanho do vetor é " << v << endl;

}