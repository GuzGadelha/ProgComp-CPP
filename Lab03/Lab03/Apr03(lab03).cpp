#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");

	double e, ena, eco, eci, peso, hco, mco, hci, mci, hna, mna;
	char car;

	cout << "Digite o seu peso em quilos: ";
	cin >> peso;

	cout << "Digite o tempo de corrida: ";
	cin >> hco;
	cin >> car;
	cin >> mco;
	cin >> car;

	cout << "Digite o tempo de ciclismo: ";
	cin >> hci;
	cin >> car;
	cin >> mci;
	cin >> car;

	cout << "Digite o tempo de natação: ";
	cin >> hna;
	cin >> car;
	cin >> mna;
	cin >> car;


	ena = 8 * peso * (((hna * 60) + mna) / 60.0);
	eco = 7 * peso * (((hco * 60) + mco) / 60.0);
	eci = 7 * peso * (((hci * 60) + mci) / 60.0);

	e = eci + eco + ena;

	cout << "Voce gastou um total de " << e << " calorias";

}