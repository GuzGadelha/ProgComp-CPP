#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vari�veis
	int horaChegada, horaPartida, minChegada, minPartida, minTotalPartida, minTotalChegada, minTotal, horaFinal, minFinal;
	char dp;
	// Entrada
	cout << "Digite o hor�rio de partida (HH:MM): ";
	cin >> horaPartida >> dp >> minPartida;
	cout << "Digite o hor�rio de chegada (HH:MM): ";
	cin >>  horaChegada >> dp >> minChegada;
	//Calculo
	// Primeiro eu transformo TUDO em minutos ara conseguir fazer um calculo que seja equivalente
	minTotalPartida = (horaPartida * 60) + minPartida;
	minTotalChegada = (horaChegada * 60) + minChegada;
	// Depois eu subtraio os minutos totais da chegada pela partida
	minTotal = minTotalChegada - minTotalPartida;
	// Com a quantidade de minutos que a viagem demorou em m�os eu divido por 60 para encontrar as horas
	horaFinal = minTotal / 60;
	// E o resto da divis�o me da os minutos restantes
	minFinal = minTotal % 60;
	// Sa�da
	cout << "O tempo total de viagem foi " << horaFinal << " horas e " << minFinal << " min.\n";
	return 0;
}