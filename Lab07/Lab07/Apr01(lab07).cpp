#include <iostream>
using namespace std;

char codifica(char);
char decodifica(char);

int main() {
	system("chcp 1252 > nul");

	cout << "Escolha um caractere qualquer: ";
	char qualquer;
	cin >> qualquer;
	cout << "Após ser codificado: " << codifica(qualquer) << endl;
	cout << "Depois de Decodificado: " << decodifica(codifica(qualquer)) << endl;

	return 0;
}
char codifica(char antes) {
	char depois = antes + 3;
	return depois;
}
char decodifica(char antes) {
	char depois = antes - 3;
	return depois;
}