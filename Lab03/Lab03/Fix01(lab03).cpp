#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int segundos, minutos;
	cout << "Digite uma quantidade de minutos: ";
	cin >> minutos;
	segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em " << minutos << " minutos.";
	system("pause");
}

// Corrigido, tive que corrigir muita coisa, o numero do calculo estava errado
// os comandos estavam na ordem trocada, faltou "" em muitos cantos 
// e quase nenhuma linha terminava com ;