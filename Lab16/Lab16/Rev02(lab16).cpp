#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// vetor de caracteres
	char vetor[15] = { "oi eu sou guz!" };
	// Exibição e laço
	int i = 0;
	for (i = 0; vetor[i] != '\0'; i++) 
		cout << vetor[i];
	
	return 0;
}