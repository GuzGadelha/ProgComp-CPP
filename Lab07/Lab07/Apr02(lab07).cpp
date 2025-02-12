#include <iostream>
#include "Cod_e_Dec.h"
using namespace std;

int main() 
{
	system("chcp 1252 > nul");
	// Entrada
	cout << "Escolha um número: ___\b\b\b";
	char letra;
	cin >> letra;
	cout << "\nDeseja codificar ou decodificar?";
	cout << "\n(1 para codificar e 0 para decodificar) ";
	bool resposta;
	cin >> resposta;
	// Saída
	if (resposta == true)
		cout << "Resultado da codificação: " << codificar(letra);
	else
		cout << "Resultado da decodificação: " << decodificar(letra);

	return 0;
}