#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um n�mero ponto flutuante: ";
	double num;
	cin >> num;
	cout << "Nota��o padr�o: " << (int)num << endl;
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout.precision(6);
	cout << "Nota��o c��ntifica: " << num << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(4);
	cout << "Not���o decimal: " << num;
	return 0;
}