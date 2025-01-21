#include <iostream>
#include <cmath>
using namespace std;

double aoquadra(double);
double aocubo(double);

int main() {
	system("chcp 1252 > nul");

	cout << "digite um valor: ";
	double num;
	cin >> num;

	cout << "o valor ao quadrado é: ";
	double num2;
	num2 = aoquadra(num);
	cout << num2 << endl;


	cout << "o valor ao cubo é: ";
	double num3;
	num3 = aocubo(num);
	cout << num3 << endl;

	cout << "cubo do quadrado: ";
	double num4;
	num4 = aocubo(aoquadra(num));
	cout << num4 << endl;

}

double aoquadra(double num) {

	double squ = num;
	squ = pow(squ, 2);

	return squ;
}

double aocubo(double num) {

	double cb = num;
	cb = pow(cb, 3);

	return cb;
}