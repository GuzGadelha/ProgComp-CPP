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

	cout << "Seu rel�gio esta atrasado!";
	cout << "\nEsse � o horario certo " << h + 1 << c << m;

}