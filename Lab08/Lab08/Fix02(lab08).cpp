#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um numero ponto flutuante(decimal) de at� 6 digitos: ";
	float num;
	cin >> num;

	// Padr�o
	cout << "Nota��o padr�o: " << num << endl;
	// Nota��o cient�fica
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout.precision(8);
	cout << "Nota��o cient�fica: " << num << endl;
	// Nota��o Decimal
	// Configurando o cout para exibir 8 casas decimais
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(8);
	cout << "Nota��o Decimal: " << num << endl;

	return 0;
}