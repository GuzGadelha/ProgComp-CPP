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
Os valores imprimidos ser�o 0, 3, 6, 9 e por �ltimo 12, mas porque?
Por qu� o la�o ira come�ar com 0, ira imprimi-lo porque � menor q 11, depois 3, 6, 9 pelo mesmo motivo, 
mas antes de sair vai ser incrementado novamente, se tornando 12, como 12 n�o � menor que 11 vai sair do la�o poor isso 
mesmo o ultimo impresso no la�o sendo 9 o ultimo valor analisado e atribui a vari�vel "J" � 12.
*/