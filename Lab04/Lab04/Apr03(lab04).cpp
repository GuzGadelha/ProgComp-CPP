#include <iostream>
using namespace std;

float media(float n1, float n2);

int main() {
	// caracteres
	system("chcp 1252 > nul");
	// Definição de variáveis 
	float n1, n2, m;
	// Perguntas
	cout << "Digite o 1° número: \n";
	cin >> n1;
	cout << "Digite o 2° número: \n";
	cin >> n2;
	// Chamada de função
	media(n1, n2);
	return 0;
}

float media(float rn1, float rn2) {

	float m = (rn1 + rn2) / 2.f;

	cout << "A média desses dois é: " << m << endl;

	return m;
}