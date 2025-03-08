#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int k = 4;
	do
		cout << " k = " << k << endl;
	while (k++ < 5);

	return 0;
}

/*
2. O que o código abaixo iria exibir se ele fosse parte de um programa válido?

int k = 4;
do
cout << " k = " << k << endl;
while (k++ < 5);

Sim, ele imprimirá 

k = 4 
k = 5 

omprograma começa com k = 4, depois imprime com 4, compara 4 com 5 e como é menor ele faz o laço novamente
depois da comparação é incrementado uma vez, isso acontece pois o ++ vem após a variável,
o laço acontece novamente e como 5 < 5 é falso ele para
*/