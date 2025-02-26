#include <iostream>
using namespace std;

struct datas {
	int dia;
	int mes;
	int ano;
};

struct horario {
	int hora;
	int min;
};

struct evento {
	datas dat;
	horario hor;
	char desc[50];
};


ostream& operator<< (ostream& out, horario temp) {
	out << temp.hora << ":" << temp.min;
	return out;
}

ostream& operator<< (ostream& out, datas dat ) {
	out << dat.dia << "/" << dat.mes << "/" << dat.ano;
	return out;
}

istream& operator>> (istream& out, horario temp) {
	out << temp.hora << ":" << temp.min;
	return out;
}

istream& operator<< (istream& out, datas dat) {
	out << dat.dia << "/" << dat.mes << "/" << dat.ano;
	return out;
}


ostream& operator<< (ostream& out, evento ev) {
	out << ev.dat << " " << ev.hor << " " << ev.desc;
	return out;
}

int main() {
	system("chcp 1252 > nul");
	// Variáveis e Vetores
	evento eventosMossoro[10];
	// Entrada 
	cout << "Entre com dois eventos:" << endl;
	cout << "#1" << endl;
	cout << "Data: ";
	cin >> eventosMossoro[0].dat;
	cout << "Hora: ";
	cin >> eventosMossoro[0].hor;
	cout << "Desc: ";
	cin >> eventosMossoro[0].desc;
	cout << "#2" << endl;
	cout << "Data: ";
	cin >> eventosMossoro[0].dat;
	cout << "Hora: ";
	cin >> eventosMossoro[0].hor;
	cout << "Desc: ";
	cin >> eventosMossoro[0].desc;
	// Saída
	cout << "- - - - - - - - - - - - - " << endl;
	cout << "Eventos cadastrados" << endl;
	cout << eventosMossoro[0];
	cout << eventosMossoro[1];
	return 0;
}