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
	// Variáveis 
	contaBancaria primeira;
	// Entrada 
	cout << "Qual seu número de identificação? ";
	cin >> primeira.identificador;
	cin.get();
	cout << "Qual o seu nome? ";
	cin.getline(primeira.nome, tam);
	primeira.saldo = 0.0;
	// Saída 
	cout << "Nome: " << primeira.nome << endl;
	cout << "identificador: " << primeira.identificador << endl;
	cout << "Saldo = R$" << primeira.saldo << endl;
	cout << "Deseja depósitar quanto? ";
	cin >> primeira.saldo;
	cout << "Saldo atual = R$" << primeira.saldo;

	/*1. Defina um registro Conta Bancária, com os campos identificador, nome do cliente e 
saldo. Na função principal, use o novo tipo Conta Bancária para criar uma variável 
e peça ao usuário para entrar com os dados da conta. O saldo inicial deve ser zero. 
Mostre a conta depois de criada e pergunte quanto o usuário deseja depositar na 
conta, modificando o seu saldo.*/

	return 0;
}