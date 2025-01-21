#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int inicializar();
void ligar();
void verificar();
void ativar();

int main() {
	system("chcp 1252 > nul");

	int func;
	func = inicializar();

	if (func > 16384) {
		cout << "sistema em funcionamento\n";
	}
	else {
		cout << "falha na inicialização\n";
	}

	return 0;
}

int inicializar() {
	int res;

	cout << "inicializar o sistema: \n";
	ligar();
	verificar();
	ativar();
	cout << "inicialização concluida\n";

	srand(time(NULL));
	return rand();
}

void ligar() {
	cout << "- Ligando dispositivos\n";
}

void verificar() {
	cout << "- Verificando integridade\n";
}

void ativar() {
	cout << "- Ativando processos\n";
}