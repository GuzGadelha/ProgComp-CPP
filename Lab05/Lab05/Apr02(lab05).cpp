#include <iostream>
using namespace std;

int salAum(int);

int main() {
	system("chcp 1252 > nul");

	cout << "por favor digite o valor de seu atual salário: ";
	int salAt, salDp;
	cin >> salAt;

	salDp = salAum(salAt);

	cout << "Salário atual: " << salAt << endl;
	cout << "Salário ajustado para: " << salDp;

}

int salAum(int a) {

	a = a + (a * 0.15);

	return a;
}







/*Defina uma função que aumenta o salário de um funcionário em 15%. Na função
principal peça o salário atual do funcionário, passe este salário para uma função
que retorna o salário aumentado. Na função principal mostre o novo salário do
funcionário.
C R$10000
Salário ajustado para R$11500
*/