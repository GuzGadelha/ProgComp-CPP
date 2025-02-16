#include <iostream>
using namespace std;

bool TestarBits(unsigned char numeroOriginal, int bitSelecionado);
void exibirBits(unsigned char byte);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um valor entre 0 e 255: ";
	unsigned int byte;
	cin >> byte;
	cout << byte << endl;
	cout << "O valor " << (int)byte << " em binário é: ";
	exibirBits(byte);

	return 0;
}

bool TestarBits(unsigned char numeroOriginal, int bitSelecionado) {
	unsigned char mask = 1;
	return numeroOriginal & (mask << bitSelecionado - 1);
}

void exibirBits(unsigned char byte) {
	cout << TestarBits(byte, 8);
	cout << TestarBits(byte, 7); 
	cout << TestarBits(byte, 6); 
	cout << TestarBits(byte, 5);
	cout << TestarBits(byte, 4);
	cout << TestarBits(byte, 3); 
	cout << TestarBits(byte, 2);
	cout << TestarBits(byte, 1) << endl;
}
