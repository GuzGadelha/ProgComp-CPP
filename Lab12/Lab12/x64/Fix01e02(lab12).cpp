#include <iostream>
using namespace std;

// Declarando tipo "chocolate" (registro)
struct chocolate {
	char marca[15];
	float peso;
	unsigned int calorias;
};

// Configurando o operador cout para exibir variaveis do tipo chocolate
ostream& operator<< (ostream& out , chocolate generico) {
	cout << "Marca: " << generico.marca << endl;
	cout << "Peso: " << generico.peso << endl;
	cout << "Calorias: " << generico.calorias;
	return out;
}

int main() {
	system("chcp 1252 > nul");
	// Variaveis e Vetores
	chocolate lanche = { "Charge", 2.3f, 350 };
	chocolate diversos[3];
	// Saída
	cout << lanche << endl;
	// Inicializando vetor
	diversos[0] = { "Snikers", 50.0f, 250 };
	diversos[1] = { "Choquito", 8.5f, 83 };
	diversos[2] = { "Diamante negro", 25.0f, 130 };
	// Saída 
	cout << "---------------------" << endl;
	cout << diversos[0] << endl;
	cout << diversos[1] << endl;
	cout << diversos[2];
	return 0;
}