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
	// chamando função
	horas(x, y);

}

void horas(int x, int y) {
	// a função escreve separadamente os números já com os dois pontos
	cout << "agora são: " << x << ":" << y << endl;
}