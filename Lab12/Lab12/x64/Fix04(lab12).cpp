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
	datas resultado;
	unsigned int diasTotaisPorAno, diasTotaisPorMes, dias, diasTotais;
	diasTotaisPorAno = (dataAtual.ano * 365) - (dataNasc.ano * 365);
	diasTotaisPorMes = ((diasTotaisPorAno / 12) + dataAtual.mes + dataNasc.mes) * 31;
	diasTotais = diasTotaisPorMes + dataAtual.dia + dataNasc.dia;
	return diasTotais;
}

