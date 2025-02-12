#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	unsigned short x = 1;
	x = x + 32767;
	cout << "x = " << x << endl;

	unsigned int y = 2'147'483'647;
	y = y + 1;
	cout << "y = " << y << endl;

	return 0;
}

// E só usar o "unsigned" antes do tipo da variável, 
// isso tira o bit de sinal, aumentando um bit e dobrando o valor 
// que os bytes conseguem representar . O motivo de ter dado errado é porque 
// tanto 32767 quanto 2147483647 são os respectivos limites dentro dos tipos short e int.