#include <iostream>
using namespace std;

float medharm(float, float);

int main() {
	system("chcp 1252 > nul");
	// Declara��o de vari�veis e entrada de valores 
	float n1, n2, tres;
	cout << "Entre com um n�mero: ";
	cin >> n1;
	cout << "Entre com outro n�mero: ";
	cin >> n2;
	// Chamada da fun��o
	cout << "A media harmonica ficou = " << medharm(n1, n2) << endl;

	return 0;
}

float medharm(float n1, float n2) {
	//calculo da media
	float res;
	res = 2.0 * n1 * n2 / (n1 + n2); // formula da m�dia harm�nica

	return res;
}