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
	// Chamo a função com seu valor retornado dentro de uma variável
	int func;
	func = inicializar();
	// Caso o valor retornado de inicializar() seja maior ou menor que 16384 
	// ele dará uma resposta diferente
	if (func > 16384) {
		cout << "\nSistema em funcionamento\n";
	}
	else {
		system("cls");
		cout << "Falha na inicialização\n";
	}

	return 0;
}

int inicializar() {
	// inicializar escreve o que precisa e chama as outras funções,
	// tambem retorna um valor aleatório
	cout << "Inicializar o sistema: \n";
	ligar();
	verificar();
	ativar();
	cout << "Inicialização concluida\n";
	// retornando aleatorio
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