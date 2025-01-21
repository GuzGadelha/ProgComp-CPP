#include <iostream>
using namespace std;

float converte(float cel);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite uma temperatura em graus Celsius:\n";
	float cel;
	cin >> cel;

	converte(cel);

}

float converte(float cel) {

	float fah;
	fah = 1.8 * cel + 32;

	cout << cel << " graus Celsius equivalem a " << fah << " graus Fahrenheit.";

	return fah;
}