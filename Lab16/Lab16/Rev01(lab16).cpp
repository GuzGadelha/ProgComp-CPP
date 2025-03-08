#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");


	int x;
	cout << "Digite um valor: ";
	for (cin >> x; x; cin >> x)
		cout << "Digite outro valor: ";

	return 0;
}

// Lê e troca constantemente o valor de X