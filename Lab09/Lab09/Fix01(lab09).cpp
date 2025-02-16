#include<iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite o valor de X1: ";
	double x1;
	cin >> x1;
	cout << "Digite o valor de X2: ";
	double x2;
	cin >> x2;
	cout << "A adição inteira dos valores  é: " << int(x1) + int(x2);

	return 0;
}