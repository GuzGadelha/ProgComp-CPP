#include <iostream>
using namespace std;

void calculo(float, float, float);

int main() {
	system("chcp 1252 > nul");
	// Variáveis
	float a = 1.0f;
	float b = 2.0f;
	float c = 5.0f;
	// Chamada de função
	calculo(a, b, c);

	return 0;
}

void calculo(float a, float b, float c) {
	// Delta
	float delta = pow(b, 2) - 4 * a * c;
	// Bhaskara
	float x1 = (-b + sqrt(delta)) / (2 * a);
	float x2 = (-b - sqrt(delta)) / (2 * a);
	// IFs para os possíveis casos de raiz
	if (delta > 0)
		cout << "Há duas raizes distintas: " << x1 << " e " << x2;
	if (delta == 0)
		cout << "Há apenas uma raiz: " << x1;
	if (delta < 0)
		cout << "Não há raiz real.";
}