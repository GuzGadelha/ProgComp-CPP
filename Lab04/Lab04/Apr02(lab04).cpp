#include <iostream>
#include <cmath>
using namespace std;

double grau, rad;

int main() {
	system("chcp 1252 > nul");

	cout << "digite um angulo: ";
	cin >> grau;

	rad = (grau * 3.14159) / 180;

	cout << "seno = " << sin(rad);
	return 0;
}