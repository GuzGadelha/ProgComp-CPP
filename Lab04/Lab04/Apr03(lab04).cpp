#include <iostream>
using namespace std;

float media(float n1, float n2);

int main() {
	// caracteres
	system("chcp 1252 > nul");
	// Defini��o de vari�veis 
	float n1, n2, m;
	// Perguntas
	cout << "Digite o 1� n�mero: \n";
	cin >> n1;
	cout << "Digite o 2� n�mero: \n";
	cin >> n2;
	// Chamada de fun��o
	media(n1, n2);
	return 0;
}

float media(float rn1, float rn2) {

	float m = (rn1 + rn2) / 2.f;

	cout << "A m�dia desses dois �: " << m << endl;

	return m;
}