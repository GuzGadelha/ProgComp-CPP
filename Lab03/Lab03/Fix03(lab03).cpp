#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vari�veis
	int idade;
	// Pergunta e Leitura
	cout << "Quantos anos voc� tem? \n";
	cin >> idade;
	cout << idade << " anos equivalem a " << idade * 365 << " dias";
}