#include <iostream>
using namespace std;

bool StrEqual(const char[], char[]);

int main() {
	system("chcp 1252 > nul");

	char palavra[20] = "colega";
	if (StrEqual("colega", palavra))
		cout << "Iguais" << endl;
	else
		cout << "Diferentes" << endl;

	return 0;
}

bool StrEqual(const char x[], char y[]) {
	return strcmp(x, y) == 0;
}


/*
4. Escreva uma função StrEqual que recebe duas strings e 
retorna um valor booleano para indicar se elas são iguais.
A função deve funcionar com o trecho de código abaixo:
char palavra[20] = "colega";
if (StrEqual("colega", palavra))
cout << "Iguais" << endl;
else
cout << "Diferentes" << endl;
*/