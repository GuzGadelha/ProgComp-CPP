#include <iostream>
using namespace std;

void senha();
void alerta();

int main() {
	system("chcp 1252 > nul");

	cout << "Iniciando com um som...\n";
	alerta();
	senha();
	cout << "Obrigado!";
	return 0;
}

void alerta(void) {
	cout << "\a";
}

void senha(void) {
	cout << "Digite sua senha: __________\b\b\b\b\b\b\b\b\b\b";
	char senha;
	cin >> senha;
}