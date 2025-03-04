#include <iostream>
using namespace std;

struct carros {
	char modelo[10];
	unsigned int anoFab;
	float preco;
};

float soma(carros*);

int main() {
	system("chcp 1252 > nul");
	// Vetor e Ponteiro
	carros* pont = new carros[3];
	// Entrada
	cout << "Entre com dois carros:\n";
	cin >> pont[0].modelo >> pont[0].anoFab >> pont[0].preco;
	cin >> pont[1].modelo >> pont[1].anoFab >> pont[1].preco;
	// Saída
	//Configuração do cout
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << "O valor total é R$" << soma(pont); // Chamada de função
	return 0;
}

float soma(carros* pont) {
	return pont[0].preco + pont[1].preco;
}