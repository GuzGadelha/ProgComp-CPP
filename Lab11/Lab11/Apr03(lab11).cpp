#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Strings
	const int tam = 30;
	char data[tam];
	char nome[tam];
	char here[] = {" esteve aqui em "};
	// Entrada
	cout << "Nome: ";
	cin.getline(nome, tam);
	cout << "Data: ";
	cin.getline(data, tam);
	// Concatenação
	char concat[100] = "";
	strcat(concat, nome);
	strcat(concat, here);
	strcat(concat, data);
	// Saída
	cout << concat;

	return 0;
}
