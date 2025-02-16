#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char, int);
unsigned char desligarBit(unsigned char, int);
bool TestarBit(unsigned char, int);

int main() {
	system("chcp 1252 > nul");

	// Vari�veis
	int ligaIndice = 3; // Caso eu for ligar o 3� devera imprimir o n�mero 8
	int desligaIndice = 1;
	int TestarIndice = 2;
	unsigned char oitoBits = 0b0000'0001; // Representei 0 em bin�rio, no caso 1 byte
	
	// Cabe�alho
	cout << "N�mero atual: " << int(oitoBits) << endl;
	
	// ligando
	cout << "Ap�s ligar o " << ligaIndice << "� bit o resultado ser�: ";
	cout << int(ligarBit(oitoBits, ligaIndice)) << endl;
	
	//desligando
	cout << "Ap�s desligar o " << desligaIndice << "� bit o resultado ser�: ";
	cout << int(desligarBit(oitoBits, desligaIndice)) << endl;
	
	// Testando 
	cout << "O bit " << TestarIndice << " neste momento est�: " << TestarBit(oitoBits, TestarIndice);
	return 0;
}

unsigned char ligarBit(unsigned char binario, int deslocamento) {
	unsigned char mask = 1 << deslocamento;
	binario = binario | mask; // somo com 1
	return binario;
}

unsigned char desligarBit(unsigned char binario, int deslocamento) {
	unsigned char mask = 1 << deslocamento;
	binario = binario & ~mask; // multiplico por zero --- OBS: a mascara est� negada para transformar todos em  1 e apenas o bit q eu quero em 0
	return binario;
}

bool TestarBit(unsigned char numeroOriginal, int bitSelecionado) {
	unsigned char mask = 1;
	return numeroOriginal & (mask << bitSelecionado -1);
}