#include <iostream>
using namespace std;

int salAum(int);

int main() {
	system("chcp 1252 > nul");

	cout << "por favor digite o valor de seu atual sal�rio: ";
	int salAt, salDp;
	cin >> salAt;

	salDp = salAum(salAt);

	cout << "Sal�rio atual: " << salAt << endl;
	cout << "Sal�rio ajustado para: " << salDp;

}

int salAum(int a) {

	a = a + (a * 0.15);

	return a;
}







/*Defina uma fun��o que aumenta o sal�rio de um funcion�rio em 15%. Na fun��o
principal pe�a o sal�rio atual do funcion�rio, passe este sal�rio para uma fun��o
que retorna o sal�rio aumentado. Na fun��o principal mostre o novo sal�rio do
funcion�rio.
C R$10000
Sal�rio ajustado para R$11500
*/