#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores e constante do tamanho
	const int tam = 10;
	char priNome[tam];
	char segNome[tam];
	// Entrada 
	cout << "Primeiro nome? ";
	// cin.getline(priNome, 10);
	cin >> priNome;
	cout << "Segundo nome? ";
	// cin.getline(segNome, 10);
	cin >> segNome;
	// Saída 
	cout << "Bom dia, " << priNome << " " << segNome << endl;
	cout << "Seja bem-vindo " << priNome[0] << segNome[0] << "!";
	return 0;
}