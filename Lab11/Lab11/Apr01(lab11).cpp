#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variaveis e Vetores
	char senhaBase[6] = { 'r', 'a', 'i', 'v', 'a' };
	char senhaEntra[6];
	// Entrada
	cout << "Digite a senha: ";
	cin >> senhaEntra;
	// Saída
	if (senhaEntra == senhaBase) {
		cout << "Senha correta!";
	}
	else {

		cout << "senha Incorreta!";
	
	}
	return 0;
}