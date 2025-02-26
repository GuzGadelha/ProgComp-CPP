#include <iostream>
using namespace std;

union jogador
{
	char nome[25];    // nome do jogador 
	int numero;       // numero da camisa do jogador 
};

struct gol
{
	jogador jog;      // identificação do jogador 
	int hora, min;    // hora e minuto em que o gol foi marcado 
};

istream& operator>> (istream& in, jogador& jog) {
	in >> jog.nome;
	return in;
}

istream& operator>> (istream& in, gol& gol) {
	in >> gol.jog;
	in >> gol.hora;
	in.get();
	in >> gol.min;
	return in;
}

int main() {
	system("chcp 1252 > nul");
	// Variaveis e Vetores
	gol tresGols[3];
	cout << "Digite os dados dos 3 últimos gols: ";
	cout << "Gol:";
	cin >> tresGols[0];
	cout << "Gol:";
	cin >> tresGols[1];
	cout << "Gol:";
	cin >> tresGols[2];
	return 0;
}