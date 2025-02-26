#include <iostream>
using namespace std;

struct datas {
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;

};

unsigned int calcular(datas, datas);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	datas nasceu{};
	datas hoje{};
	// Entrada
	cout << "Quando você nasceu? ";
	cin >> nasceu.dia;
	cin.ignore(1);
	cin >> nasceu.mes;
	cin.ignore(1);
	cin >> nasceu.ano;
	cout << "Que dia é hoje? ";
	cin >> hoje.dia;
	cin.ignore(1);
	cin >> hoje.mes;
	cin.ignore(1);
	cin >> hoje.ano;
	// Calculo 
	unsigned int total = calcular(nasceu, hoje);
	// Saída 
	cout << "Você tem " << total << " dias de vida.";
	return 0;
}

unsigned int calcular(datas dataNasc, datas dataAtual) {
	const int diasAno = 365;
	const int diasMes = 31;
	unsigned int diasNasc = (dataNasc.ano * diasAno) + ((dataNasc.mes - 1) * diasMes) + dataNasc.dia;
	unsigned int diasAtual = (dataAtual.ano * diasAno) + ((dataAtual.mes - 1) * diasMes) + dataAtual.dia;
	unsigned int total = diasAtual - diasNasc;
	return total;
}
