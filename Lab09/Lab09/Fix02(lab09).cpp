#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um número ponto flutuante: ";
	double num;
	cin >> num;
	cout << "Notação padrão: " << (int)num << endl;
	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout.precision(6);
	cout << "Notação cîêntifica: " << num << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(4);
	cout << "Notãção decimal: " << num;
	return 0;
}