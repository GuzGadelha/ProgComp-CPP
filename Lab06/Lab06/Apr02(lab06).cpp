#include <iostream>
using namespace std;

#define pao 0.30
#define pastel 0.25
#define blue "\033[1;34;47m"

int main() {
	system("chcp 1252 > nul");
	// Vari�veis
	float quantPao, quantPastel, valorPao, valorPastel, valorFinal;
	// Entrada
	cout << blue << "P�es&Cia\n\n";
	cout << blue << "Quantos P�es? ";
	cin >> quantPao;
	cout << blue << "Quantos Pasteis? ";
	cin >> quantPastel;
	// Calculo 
	valorPao = pao * quantPao;
	valorPastel = pastel * quantPastel;
	valorFinal = valorPao + valorPastel;
	// Saida
	cout << blue << "O total das compras � R$" << valorFinal;
	return 0;
}