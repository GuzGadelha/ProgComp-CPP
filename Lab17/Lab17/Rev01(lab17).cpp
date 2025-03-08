#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int j;
	for (j = 0; j < 11; j += 3)
		cout << j;
	cout << endl << j << endl;

	return 0;
}

/*
Os valores imprimidos serão 0, 3, 6, 9 e por ùltimo 12, mas porque?
Por quê o laço ira começar com 0, ira imprimi-lo porque é menor q 11, depois 3, 6, 9 pelo mesmo motivo, 
mas antes de sair vai ser incrementado novamente, se tornando 12, como 12 não é menor que 11 vai sair do laço poor isso 
mesmo o ultimo impresso no laço sendo 9 o ultimo valor analisado e atribui a variável "J" é 12.
*/