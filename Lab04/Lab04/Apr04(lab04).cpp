#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro(float, float);
float raio, alt;

int main() {
	system("chcp 1252 > nul");
	// Cabeçalho
	cout << "Calcula Volume de cilindro\n----------------------------\n";
	// Entrada do raio
	cout << "Digite o raio do seu cilindro: ";
	cin >> raio;
	// Entrada da altura
	cout << "Digite a altura do seu cilindro: ";
	cin >> alt;
	//Resultado e chamada ds função
	cout << "O volume do seu cilindro é: " << VolumeCilindro(raio, alt) << endl;

	return 0;
}

float VolumeCilindro(float raio, float alt) {
	// Variável para guardar o valor final
	float v;
	//Formula: V = π r^2 h
	v = 3.14159 * pow(raio, 2.0) * alt;
	
	return v;
}