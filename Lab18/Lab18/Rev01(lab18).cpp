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
1. O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int j = 5;
while (++j < 9)
cout << j++ << endl;

Rodaria sim, esse programa começa incrimentando o 5 para 6 antes da condição, pois o ++ vem antes do "j",
depois ele compara j com 9, caso seja menor ele imprime, depois lá embaixo o valor é incrementado mais uma vez, 
se tornando 7, depois incrementado para 8 antes da comparação, por isso a saíde é:
6
8

*/