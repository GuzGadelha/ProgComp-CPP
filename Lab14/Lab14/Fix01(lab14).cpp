#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int x, * p, ** q;
	p = &x;
	q = &p;
	x = 10;
	cout << **q << endl;   // n�o est� mostrando o n�mero 10 
	// aponta para p que aponta para x
	return 0;
}