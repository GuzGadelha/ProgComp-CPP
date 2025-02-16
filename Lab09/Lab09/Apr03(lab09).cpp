#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um número real: ";
	double num; cin >> num;
	cout << "A parte inteira: " << int(num) << endl;
	cout << "A parte fracionaria: " << (int(num) - num)*-1;

	return 0;
}