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

// Embora pare�am os n�meros n�o s�o aleatorios, 
// em codigo ASCII s�o a diferen�a entre as letras impressas e a letra A
// ou melhor, a diferen�a entre a posi��o dos caracteres