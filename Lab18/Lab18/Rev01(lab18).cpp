#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int j = 5;
	while (++j < 9)
		cout << j++ << endl;

	return 0;
}

/*
1. O que o c�digo abaixo iria exibir se ele fosse parte de um programa v�lido?

int j = 5;
while (++j < 9)
cout << j++ << endl;

Rodaria sim, esse programa come�a incrimentando o 5 para 6 antes da condi��o, pois o ++ vem antes do "j",
depois ele compara j com 9, caso seja menor ele imprime, depois l� embaixo o valor � incrementado mais uma vez, 
se tornando 7, depois incrementado para 8 antes da compara��o, por isso a sa�de �:
6
8

*/