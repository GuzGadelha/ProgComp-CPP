#include <iostream>
using namespace std;

#define red "\033[4;30;41m"


int main() {
	system("chcp 1252 > nul");
	// Declara��o de vari�veis
	float dist, litros;
	// Entrada de dados
	cout << red << "Dist�ncia percorrida(Km): ";
	cin >> dist;
	cout << red << "Litros de combust�vel: ";
	cin >> litros;
	// Calculo
	float consumo = dist/litros;
	// Sa�da de dados
	cout << red << "O consumo do seu carro foi de " << consumo << " Km/Litros.\n";
	return 0;
}

// N�o � poss�vel estar sempre certo apenas com n�meros(vari�veis) inteiros
// porque caso alguem entre com um numero decimal os inteiros n�o ir�o funcionar