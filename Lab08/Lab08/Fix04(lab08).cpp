#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite a quantidade de gal�es de �gua: ";
	double galoes;
	cin >> galoes;
	double massaTotal = galoes * (950.0 * 4.0);
	double quantMolec = massaTotal / 3.0e-23;
	cout << "Em " << galoes << " gal�es existem " << quantMolec << " mol�culas de �gua.";

	return 0;
}