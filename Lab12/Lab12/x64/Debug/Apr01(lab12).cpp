#include <iostream>
using namespace std;

const int tam = 50;

struct contaBancaria {
	int identificador;
	char nome[tam];
	double saldo;
};

int main() {
	system("chcp 1252 > nul");
	// Vari�veis 
	contaBancaria primeira;
	// Entrada 
	cout << "Qual seu n�mero de identifica��o? ";
	cin >> primeira.identificador;
	cin.get();
	cout << "Qual o seu nome? ";
	cin.getline(primeira.nome, tam);
	primeira.saldo = 0.0;
	// Sa�da 
	cout << "Nome: " << primeira.nome << endl;
	cout << "identificador: " << primeira.identificador << endl;
	cout << "Saldo = R$" << primeira.saldo << endl;
	cout << "Deseja dep�sitar quanto? ";
	cin >> primeira.saldo;
	cout << "Saldo atual = R$" << primeira.saldo;

	/*1. Defina um registro Conta Banc�ria, com os campos identificador, nome do cliente e 
saldo. Na fun��o principal, use o novo tipo Conta Banc�ria para criar uma vari�vel 
e pe�a ao usu�rio para entrar com os dados da conta. O saldo inicial deve ser zero. 
Mostre a conta depois de criada e pergunte quanto o usu�rio deseja depositar na 
conta, modificando o seu saldo.*/

	return 0;
}