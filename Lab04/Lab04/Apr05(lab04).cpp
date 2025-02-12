#include <iostream>
using namespace std;

int absoluto(int);
int num;

int main() {
	system("chcp 1252 > nul");
	// Recebendo
	cout << "digite um numero inteiro: ";
	cin >> num;
	// Chamando função
	cout << "o valor absoluto é: " << absoluto(num);

}

int absoluto(int num) {
	// Variável do valor final
	int r;
	// Multiplicando por -1
	r = num * (-1);

	return r;
}