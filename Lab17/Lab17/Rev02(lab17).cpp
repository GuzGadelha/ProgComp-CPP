#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	for (int x = 1; x <= 64; x *= 2) {
		cout << x << " ";
	}

	return 0;
}

/*
2. Escreva um la�o for que exiba os valores 1 2 4 8 16 32 64 pelo incremento de uma vari�vel contador por um fator de 2 em cada ciclo.
*/