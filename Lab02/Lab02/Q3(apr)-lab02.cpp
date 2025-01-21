#include <iostream>
using namespace std;

int main() {
	// Leitor de acentuação
	system("chcp 1252 > nul");
	// Títulos das tabelas
	cout << left; cout.width(11); cout << "Produto";
	cout << left; cout.width(13); cout << "Preço/Kg";
	cout << left; cout.width(13); cout << "Pedido (Kg)";
	cout << left; cout.width(15); cout << "Total Parcial" << endl;
	// Barrinhas "-----"
	cout << left; cout.width(11); cout << "-------";
	cout << left; cout.width(13); cout << "--------";
	cout << left; cout.width(13); cout << "-----------";
	cout << left; cout.width(15); cout << "-------------" << endl;
	// Alface
	cout << left; cout.width(11); cout << "Alface";
	cout << left; cout.width(13); cout << "R$ 1,25/Kg";
	cout << left; cout.width(13); cout << "3,2Kg";
	cout << left; cout.width(15); cout << "R$ 4,00" << endl;
	// Beterraba
	cout << left; cout.width(11); cout << "Beterraba";
	cout << left; cout.width(13); cout << "R$ 0,65/Kg";
	cout << left; cout.width(13); cout << "6,0Kg";
	cout << left; cout.width(15); cout << "R$ 3,90" << endl;
	// Cenoura
	cout << left; cout.width(11); cout << "Cenoura";
	cout << left; cout.width(13); cout << "R$ 0,90/Kg";
	cout << left; cout.width(13); cout << "10Kg";
	cout << left; cout.width(15); cout << "R$ 9,00" << endl;
}

// Padronizando os width por coluna fica bem facil de ajeitar tudo 