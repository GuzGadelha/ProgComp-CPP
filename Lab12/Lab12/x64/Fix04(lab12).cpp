#include <iostream>
using namespace std;

struct datas {
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;

};

istream& operator>> (istream& in, datas & generico) {
	in >> generico.dia;
	in.ignore(1);
	in >> generico.mes;
	in.ignore(1);
	in >> generico.ano;
	return in;
}

ostream& operator<< (ostream& out, datas & generico) {
	out << generico.dia;
	out << "/";
	out << generico.mes;
	out << "/";
	out << generico.ano;
	out << endl;
	return out;
}

unsigned int calcular(datas, datas);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	datas nasceu{};
	datas hoje{};
	// Entrada
	cout << "Quando você nasceu? ";
	cin >> nasceu;
	cout << "Que dia é hoje?";
	cin >> hoje;
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

