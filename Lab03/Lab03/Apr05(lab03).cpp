#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");


	int h, m;
	char c;

	cout << "Digite o horario atual: ";
	cin >> h;
	cin >> c;
	cin >> m;

	cout << "Seu relógio esta atrasado!";
	cout << "\nEsse é o horario certo " << h + 1 << c << m;

}