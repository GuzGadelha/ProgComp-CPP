#include <iostream>
using namespace std;

int salAum(int);

int main() {
	system("chcp 1252 > nul");

	//entrada de dados
	cout << "Por favor digite o valor de seu atual sal�rio: ";
	int salAt;
	cin >> salAt;
	//Retorno ao usu�rio e chamada da fun��o
	cout << "Sal�rio atual: " << salAt << endl;
	cout << "Sal�rio ajustado para: " << salAum(salAt);

}

int salAum(int salAt) {
	//aumenta o salario para + 15%
	salAt = salAt + (salAt * 0.15);

	return salAt;
}