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
2. O que o c�digo abaixo iria exibir se ele fosse parte de um programa v�lido?

int k = 4;
do
cout << " k = " << k << endl;
while (k++ < 5);

Sim, ele imprimir� 

k = 4 
k = 5 

omprograma come�a com k = 4, depois imprime com 4, compara 4 com 5 e como � menor ele faz o la�o novamente
depois da compara��o � incrementado uma vez, isso acontece pois o ++ vem ap�s a vari�vel,
o la�o acontece novamente e como 5 < 5 � falso ele para
*/