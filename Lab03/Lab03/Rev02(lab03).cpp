#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Declara��o de variaveis
	int hora, minutes;
	char dp;
	// Pergunta
	cout << "Que horas s�o?\n";
	// Leitura de vari�veis
	cin >> hora >> dp >> minutes;
	// Mostrando horas e minutos
	cout << hora << " horas" << endl;
	cout << minutes << " minutos";
}

// o "truque" dessa quest�o � usar uma variavel char para guardar os ":"