#include <iostream>
using namespace std;

int salAum(int);

int main() {
	system("chcp 1252 > nul");

	//entrada de dados
	cout << "Por favor digite o valor de seu atual salário: ";
	int salAt;
	cin >> salAt;
	//Retorno ao usuário e chamada da função
	cout << "Salário atual: " << salAt << endl;
	cout << "Salário ajustado para: " << salAum(salAt);

}

int salAum(int salAt) {
	//aumenta o salario para + 15%
	salAt = salAt + (salAt * 0.15);

	return salAt;
}