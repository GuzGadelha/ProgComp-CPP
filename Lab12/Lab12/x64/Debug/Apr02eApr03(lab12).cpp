#include <iostream>
using namespace std;

struct palavra {
	char pt[15];
	char ing[15];
	char esp[15];
};

void exibir(palavra);

int main() {
	system("chcp 1252 > nul");
	// Vetores 
	palavra dicionario[10];
	dicionario[0] = { "abobora", "pumpkin", "calabaza" };
	dicionario[1] = {"vermelho", "red", "rojo"};
	// Entrada
	cout << "Entre com mais uma palavra: " << endl;
	cout << "portugu�s: ";
	cin >> dicionario[2].pt;
	cout << "Ingl�s: ";
	cin >> dicionario[2].ing;
	cout << "Espanhol: ";
	cin >> dicionario[2].esp;
	// Sa�da
	// primeira
	cout << "\nPrimeira palavra!" << endl;
	exibir(dicionario[0]);
	// segunda
	cout << "\nSegunda palavra!" << endl;
	exibir(dicionario[1]);
	// terceira
	cout << "\nTerceira palavra!" << endl;
	exibir(dicionario[2]);

	return 0;
}

void exibir(palavra x) {
	cout << "-------------------------------" << endl;
	cout << "portugu�s: " << x.pt << endl;
	cout << "Ingl�s: " << x.ing << endl;
	cout << "Espanhol: " << x.esp << endl;
	cout << "-------------------------------" << endl;
}