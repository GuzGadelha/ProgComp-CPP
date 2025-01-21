#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variáveis
	int idade;
	// Pergunta e Leitura
	cout << "Quantos anos você tem? \n";
	cin >> idade;
	cout << idade << " anos equivalem a " << idade * 365 << " dias";
}