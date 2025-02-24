#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Strings
	const int tam = 45;
	char dataUm[tam];
	char dataDois[tam];
	char dataTres[tam];
	// Entrada
	cout << "Digite 3 datas comemorativas: ";
	cin.getline(dataUm, tam);
	cin.getline(dataDois, tam);
	cin.getline(dataTres, tam);
	// Concatenação
	char concat[200] = "";
	strcat(concat, dataUm);
	strcat(concat, ", ");
	strcat(concat, dataUm);
	strcat(concat, dataDois);
	strcat(concat, " e ");
	strcat(concat, dataTres);
	strcat(concat, "!");
	// Saída
	cout << concat << endl;
	// If
	if ( (strcmp(dataUm, "Natal")) == 0 || (strcmp(dataTres, "Natal")) == 0 || (strcmp(dataTres, "Natal")) == 0 )
		cout << "O Natal também é uma das minhas datas preferidas!" << endl;
	return 0;
}