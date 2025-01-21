#include <iostream>
using namespace std;

int absoluto();
int num;

int main() {
	system("chcp 1252 > nul");

	cout << "digite um numero inteiro: ";
	cin >> num;

	cout << "o valor absoluto é: " << absoluto();

}

int absoluto() {
	int r;

	r = num * -1;

	return r;
}