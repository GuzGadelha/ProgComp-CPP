#include <iostream>
using namespace std;

void horas(int, int);
int x, y;

int main() {
	system("chcp 1252 > nul");
	// Recebendo valores
	cout << "Entre com o valor da hora: ";
	cin >> x;
	cout << "Agora coloque os minutos: ";
	cin >> y;
	// chamando fun��o
	horas(x, y);

}

void horas(int x, int y) {
	// a fun��o escreve separadamente os n�meros j� com os dois pontos
	cout << "agora s�o: " << x << ":" << y << endl;
}