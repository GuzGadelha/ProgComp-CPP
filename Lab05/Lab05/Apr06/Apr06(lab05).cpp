#include <iostream>
#include "Apr06-def(lab05).h"
using namespace std;


int main() {
	system("chcp 1252 > nul");

	double x, y;
	cout << "digite coordenadas X e Y de um ponto no plano\n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	coorPol(x, y);

}

