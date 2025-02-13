#include <iostream>
using namespace std;

bool testarBit(unsigned char byte, int posicao);
void exibirBits(unsigned char byte);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um valor entre 0 e 255: ";
	unsigned char byte;
	cin >> byte;
	cout << "O valor " << (int)byte << " em binário é: ";
	exibirBits(byte);
	return 0;
}

bool testarBit(unsigned char byte, int posicao) {
	return (byte & (1 << posicao)) != 0;
}

void exibirBits(unsigned char byte) {
	for (int i = 7; i >= 0; i--) {
		if (testarBit(byte, i)) {
			cout << '1';
		} else {
			cout << '0';
		}
	}
}
