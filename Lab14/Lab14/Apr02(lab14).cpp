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
	cout << "Que horas s�o? ";
	cin >> mamada.horas;
	cin.get();
	cin >> mamada.minutos;
	// Sa�da
	cout << "Seu rel�gio est� atrasado, o horario correto � "; mostrarHorario(pont);

	return 0;
}

void mostrarHorario(horario * hor) {
	++(hor->horas);
	cout << hor->horas << ":" << hor->minutos;
}