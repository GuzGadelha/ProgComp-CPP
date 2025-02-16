#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Constantes 
	const int horasPorDia = 24;
	const int minutosPorHora = 60;
	const int segundosPorMinuto = 60;
	// Entrada
	cout << "Digite uma quantidade de segundos: ";
	int segundosTotais;  cin >> segundosTotais;
	// Calculos
	// Dias
	int dias = segundosTotais / (segundosPorMinuto * minutosPorHora * horasPorDia);
	int resto = segundosTotais % (segundosPorMinuto * minutosPorHora * horasPorDia);
	// Horas
	int horas = resto / (segundosPorMinuto * minutosPorHora);
	resto = resto % (segundosPorMinuto * minutosPorHora);
	// Minutos
	int minutos = resto / segundosPorMinuto;
	resto = resto % segundosPorMinuto;

	cout << segundosTotais << " segundos = " << dias << " dias, " << horas << " horas, " << minutos << " minutos e " << resto << " segundos";


	return 0;
}