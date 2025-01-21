#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");

	int ladob1, ladob2, areab, altura, volume;

	//area
	cout << "Digite o valor de um lado da base: ";
	cin >> ladob1;
	cout << "Digite o valor do outro lado da base: ";
	cin >> ladob2;

	areab = ladob1 * ladob2;

	cout << "\nArea da base: " << areab;

	//volume
	cout << "\nDigite a altura: ";
	cin >> altura;

	volume = areab * altura;

	cout << "\nO volume é: " << volume;


}