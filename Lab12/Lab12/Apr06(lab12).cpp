#include <iostream>
using namespace std;


struct horario {
	int hora;
	int min;
};

istream& operator>> (istream& in, horario& x) {
	in >> x.hora;
	in.ignore();
	in >> x.min;
	return in;
}

ostream& operator<< (ostream& out, horario& x) {
	out << x.hora << ":" << x.min;
	return out;
}

unsigned int minutos(horario, horario);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	horario aulaInicio, aulaFim;
	// Entrada
	cout << "Início: ";
	cin >> aulaInicio;
	cout << "Fim: ";
	cin >> aulaFim;
	// Saída
	cout << "Entre " << aulaInicio << " e " << aulaFim << " existem " << minutos(aulaInicio, aulaFim) << " minutos, isto é, "
		<< (minutos(aulaInicio, aulaFim)) / 60 << "h e " << (minutos(aulaInicio, aulaFim)) % 60 << " minutos";
	return 0;
}

unsigned int minutos(horario inicio, horario fim) {
	unsigned int total = (((fim.hora - inicio.hora) - 1) * 60) + (60 - inicio.min) + fim.min;
	return total;
}