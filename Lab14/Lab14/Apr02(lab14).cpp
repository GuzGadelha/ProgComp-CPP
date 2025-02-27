#include <iostream>
using namespace std;

struct horario {
	short horas;
	short minutos;
};

void mostrarHorario(horario*);

int main() {
	system("chcp 1252 > nul");
	// Variaveis e ponteiros
	horario mamada;
	horario* pont = &mamada;
	// Entrada
	cout << "Que horas são? ";
	cin >> mamada.horas;
	cin.get();
	cin >> mamada.minutos;
	// Saída
	cout << "Seu relógio está atrasado, o horario correto é "; mostrarHorario(pont);

	return 0;
}

void mostrarHorario(horario * hor) {
	++(hor->horas);
	cout << hor->horas << ":" << hor->minutos;
}