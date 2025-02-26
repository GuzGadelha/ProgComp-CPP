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
	int seg;
};

struct evento {
	datas dataMarcada;
	horario horas;
	char local[50];
};

istream& operator>> (istream& in, datas& x) {
	in >> x.dia;
	in.ignore();
	in >> x.mes;
	in.ignore();
	in >> x.ano;
	return in;
}
 
istream& operator>> (istream& in, horario& x) {
	in >> x.hora;
	in.ignore();
	in >> x.min;
	in.ignore();
	in >> x.seg;
	return in;
}

ostream& operator<< (ostream& out, datas& x) {
	out << x.dia << "/" << x.mes << "/" << x.ano;
	return out;
}

ostream& operator<< (ostream& out, horario& x) {
	out << x.hora << ":" << x.min << ":" << x.seg;
	return out;
}

ostream& operator<< (ostream& out, evento& x) {
	out << "Data marcada: " << x.dataMarcada << endl;
	out << "Horário: " << x.horas << endl;
	out << "Local: " << x.local;
	return out;
}

int main() {
	system("chcp 1252 > nul");
	// Variavel
	evento principal;
	// Entrada
	cout << "Aqui você pode agendar o seu evento!\n";
	cout << "------------------------------------\n";
	cout << "Digite a data do evento: dd/mm/aa" << endl;
	cin >> principal.dataMarcada;
	cout << "Em que horário ele ocorrerá: hh/mm/ss" << endl;
	cin >> principal.horas;
	cin.get();
	cout << "Agora o endereço do local: ";
	cin.getline(principal.local, 50);
	// Saída
	cout << principal;
	return 0;
}