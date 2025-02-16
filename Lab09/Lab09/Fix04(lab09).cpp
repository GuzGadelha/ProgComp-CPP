#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Entrada 
	cout << "Digite a quantia apostada pelo jogador 1: ";
	double aposta1; cin >> aposta1;
	cout << "Digite a quantia apostada pelo jogador 2: ";
	double aposta2; cin >> aposta2;
	cout << "Entre com o valor do prêmio: ";
	double premio; cin >> premio;
	// Cálculo
	double apostaTotal = aposta1 + aposta2;
	double premio1 = (aposta1 / apostaTotal) * premio;
	double premio2 = (aposta2 / apostaTotal) * premio;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(0);
	cout << "O jogador 1 tem direito a R$" << premio1 << endl;
	cout <<	"O jogador 2 tem direito a R$" << premio2 << endl;
	return 0;
}