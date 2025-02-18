#include <iostream>
using namespace std;

char charada(char, int);

int main() {
	system("chcp 1252 > nul");
	cout << charada('P' - 20, 20);
	cout << charada('a' - 90, 90);
	cout << charada('p' - 72, 72);
	cout << charada('e' - 48, 48);
	cout << charada('l' - 107, 107);
	return 0;
}

char charada(char letInicial, int x) {
	char letFinal = letInicial + x;
	return letFinal;
}

// Embora pareçam os números não são aleatorios, 
// em codigo ASCII são a diferença entre as letras impressas e a letra A
// ou melhor, a diferença entre a posição dos caracteres