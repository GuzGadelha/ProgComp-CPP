#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Declaração de variaveis
	int hora, minutes;
	char dp;
	// Pergunta
	cout << "Que horas são?\n";
	// Leitura de variáveis
	cin >> hora >> dp >> minutes;
	// Mostrando horas e minutos
	cout << hora << " horas" << endl;
	cout << minutes << " minutos";
}

// o "truque" dessa questão é usar uma variavel char para guardar os ":"