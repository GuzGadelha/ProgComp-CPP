#include <iostream>
using namespace std;

int main() {

	int cfabrica, cconsumidor, pdistribuidor, pimpostos;

	cout << "Digite o custo de fabrica: ";
	cin >> cfabrica;

	pdistribuidor = cfabrica * 0.28;
	pimpostos = cfabrica * 0.45;

	cconsumidor = pimpostos + pdistribuidor + cfabrica;

	cout << "\nCusto para o consumidor: R$ " << cconsumidor;

}