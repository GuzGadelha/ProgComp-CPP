#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");


	int valor = 10, * temp, soma = 0;
	temp = &valor;
	*temp = 20;
	temp = &soma;
	*temp = valor;
	cout << "valor: " << valor << "\nsoma: " << soma << endl;

	return 0;
}