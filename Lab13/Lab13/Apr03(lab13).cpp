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

ostream& operator<< (ostream& out, horario& temp) {
	out << temp.hora << ":" << temp.min;
	return out;
}

ostream& operator<< (ostream& out, datas& dat ) {
	out << dat.dia << "/" << dat.mes << "/" << dat.ano;
	return out;
}

ostream& operator<< (ostream& out, evento& ev) {
	out << ev.dat << " " << ev.hor << " " << ev.desc;
	return out;
}

istream& operator>> (istream& in, horario& temp) {
	in >> temp.hora;
	in.ignore();
	in >> temp.min;
	return in;
}

istream& operator>> (istream& in, datas& dat) {
	in >> dat.dia;
	in.ignore();
	in >> dat.mes;
	in.ignore();
	in >> dat.ano;
	return in;
}

int main() {
	system("chcp 1252 > nul");
	// Variáveis e Vetores
	evento eventosMossoro[10];
	// Entrada 
	cout << "Entre com dois eventos:" << endl;
	//
	cout << "#1" << endl;
	cout << "Data: ";
	cin >> eventosMossoro[0].dat;
	//
	cout << "Hora: ";
	cin >> eventosMossoro[0].hor;
	cin.get();
	//
	cout << "Desc: ";
	cin.getline(eventosMossoro[0].desc, 50);
	//
	cout << "#2" << endl;
	cout << "Data: ";
	cin >> eventosMossoro[1].dat;
	//
	cout << "Hora: ";
	cin >> eventosMossoro[1].hor;
	//
	cin.ignore();
	cout << "Desc: ";
	cin.getline(eventosMossoro[1].desc, 50);
	// Saída
	cout << "- - - - - - - - - - - - - " << endl;
	cout << "Eventos cadastrados" << endl;
	cout << eventosMossoro[0] << endl;
	cout << eventosMossoro[1] << endl;
	return 0;
}