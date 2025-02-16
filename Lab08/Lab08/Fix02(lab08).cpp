#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um numero ponto flutuante(decimal) de até 6 digitos: ";
	float num;
	cin >> num;

	// Padrão
	cout << "Notação padrão: " << num << endl;
	// Notação científica
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout.precision(8);
	cout << "Notação científica: " << num << endl;
	// Notação Decimal
	// Configurando o cout para exibir 8 casas decimais
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(8);
	cout << "Notação Decimal: " << num << endl;

	return 0;
}