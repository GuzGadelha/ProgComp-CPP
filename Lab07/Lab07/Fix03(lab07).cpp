#include <iostream>
using namespace std;

char charada(char, int);

int main() {
	system("chcp 1252 > nul");
	// Vari�veis 
	int x;
	char letInicial;
	// Primeira chamada deve imprimir P
	x = 15;
	letInicial = 'A';
	cout << charada(letInicial, x);
	// Segunda chamada deve imprimir a
	x = 32;
	cout << charada(letInicial, x);
	// Terceira chamada deve imprimir p
	x = 47;
	cout << charada(letInicial, x);
	// Quarta chamada deve imprimir e
	x = 36;
	cout << charada(letInicial, x);
	// Quinta e ultima chamada deve imprimir l
	x = 43;
	cout << charada(letInicial, x);
	return 0;
}

char charada(char letInicial, int x) {
	char letFinal = letInicial + x;
	return letFinal;
}

// Embora pare�am os n�meros n�o s�o aleatorios, 
// em codigo ASCII s�o a diferen�a entre as letras impressas e a letra A
// ou melhor, a diferen�a entre a posi��o dos caracteres