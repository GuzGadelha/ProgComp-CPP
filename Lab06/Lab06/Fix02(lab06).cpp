#include <iostream>
using namespace std;

#define red "\033[4;30;41m"


int main() {
	system("chcp 1252 > nul");
	// Declaração de variáveis
	float dist, litros;
	// Entrada de dados
	cout << red << "Distância percorrida(Km): ";
	cin >> dist;
	cout << red << "Litros de combustível: ";
	cin >> litros;
	// Calculo
	float consumo = dist/litros;
	// Saída de dados
	cout << red << "O consumo do seu carro foi de " << consumo << " Km/Litros.\n";
	return 0;
}

// Não é possível estar sempre certo apenas com números(variáveis) inteiros
// porque caso alguem entre com um numero decimal os inteiros não irão funcionar