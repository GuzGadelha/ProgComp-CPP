#include <iostream>
using namespace std;

int absoluto(int);
int num;

int main() {
	system("chcp 1252 > nul");
	// Recebendo
	cout << "digite um numero inteiro: ";
	cin >> num;
	// Chamando fun��o
	cout << "o valor absoluto �: " << absoluto(num);

}

int absoluto(int num) {
	// Vari�vel do valor final
	int r;
	// Multiplicando por -1
	r = num * (-1);

	return r;
}