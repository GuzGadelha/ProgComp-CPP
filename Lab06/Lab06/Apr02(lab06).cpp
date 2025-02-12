#include <iostream>
using namespace std;

#define pao 0.30
#define pastel 0.25
#define blue "\033[1;34;47m"

int main() {
	system("chcp 1252 > nul");
	// Variáveis
	float quantPao, quantPastel, valorPao, valorPastel, valorFinal;
	// Entrada
	cout << blue << "Pães&Cia\n\n";
	cout << blue << "Quantos Pães? ";
	cin >> quantPao;
	cout << blue << "Quantos Pasteis? ";
	cin >> quantPastel;
	// Calculo 
	valorPao = pao * quantPao;
	valorPastel = pastel * quantPastel;
	valorFinal = valorPao + valorPastel;
	// Saida
	cout << blue << "O total das compras é R$" << valorFinal;
	return 0;
}