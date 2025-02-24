#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variaveis e Vetores
	char senhaBase[6] = "raiva";
	char senhaEntra[6];
	// Entrada
	cout << "Digite a senha: ";
	cin >> senhaEntra;
	// Saída
	if (strcmp(senhaBase,senhaEntra) == 0)
		cout << "Senha correta!";
	else 
		cout << "senha Incorreta!";
	return 0;
}