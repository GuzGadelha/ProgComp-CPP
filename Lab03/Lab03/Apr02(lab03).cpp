#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	int n;
	// Escolha do n�mero
	cout << "escolha um numero: ";
	// Leitura
	cin >> n;
	// Tabuada
	cout << "tabuada de " << n << endl;
	cout << "-----------------------" << endl;

	cout << "1 x " << n << "  = " << n * 1 << endl;
	cout << "2 x " << n << "  = " << n * 2 << endl;
	cout << "3 x " << n << "  = " << n * 3 << endl;
	cout << "4 x " << n << "  = " << n * 4 << endl;
	cout << "5 x " << n << "  = " << n * 5 << endl;
	cout << "6 x " << n << "  = " << n * 6 << endl;
	cout << "7 x " << n << "  = " << n * 7 << endl;
	cout << "8 x " << n << "  = " << n * 8 << endl;
	cout << "9 x " << n << "  = " << n * 9 << endl;
	cout << "10 x " << n << " = " << n * 10 << endl;
}