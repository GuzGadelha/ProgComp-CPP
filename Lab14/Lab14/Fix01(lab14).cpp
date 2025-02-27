#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int x, * p, ** q;
	p = &x;
	q = &p;
	x = 10;
	cout << **q << endl;   // não está mostrando o número 10 
	// aponta para p que aponta para x
	return 0;
}