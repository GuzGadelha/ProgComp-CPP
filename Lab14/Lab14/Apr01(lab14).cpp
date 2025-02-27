#include <iostream>
using namespace std;

enum estado { Vazia, Cheia };
enum tipo { Sopa, Canja };

struct tigela {
	estado estado;
	tipo tipo;
 };

void fome(tigela*);
void exibir(tigela);

int main() {
	system("chcp 1252 > nul");
	// Variaveis
	tigela deBarro = { Cheia, Canja };
	tigela* pont = &deBarro;
	// Saída
	cout << "Antes do jantar: ";
	exibir(deBarro);
	fome(pont);
	cout << "Depois do jantar: ";
	exibir(deBarro);

	return 0;
}

void fome(tigela* pont) {
	pont->estado = Vazia;
}

void exibir ( tigela tig ) {
	if (tig.estado == 0)
		cout << "Vazia ";
	else
		cout << "Cheia ";
	if (tig.tipo == 0)
		cout << "Sopa";
	else
		cout << "Canja";
	cout << endl;
}