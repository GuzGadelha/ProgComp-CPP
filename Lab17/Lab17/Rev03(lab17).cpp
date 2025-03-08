#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	const int tam = 5;
	char oie[tam] = {'0', 'i', 'e', '!', '\0'};
	for (int x = 0; x < tam; ++x) {
		cout << oie[x];
	}


	return 0;
}

/*
3. Use um laço for para exibir uma string armazenada em um vetor de caracteres. 
Faça uma versão que use uma comparação no teste do laço e outra versão sem usar comparação.

*/