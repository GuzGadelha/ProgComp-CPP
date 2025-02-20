#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	float pesos[3] = { 2, 3, 4 };
	float notas[3];
	// Entrada
	cout << "Digite sua nota do 1° semestre: ";
	cin >> notas[0];
	cout << "Digite sua nota do 2° semestre: ";
	cin >> notas[1];
	cout << "Digite sua nota do 3° semestre: ";
	cin >> notas[2];
	// Cálculo
	// Antiga
	float antigaMedia = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / 9;
	// Nova
	float novaMedia = (notas[0] + notas[1] + notas[2]) / 3.0f;
	// Saída
	cout << "Média antiga: " << antigaMedia << endl;
	cout << "Média nova: " << novaMedia;

	return 0;
}