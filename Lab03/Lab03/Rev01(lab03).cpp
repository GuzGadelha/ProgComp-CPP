#include <iostream>
using namespace std;

int main() {
	//Leitor de caracteres
	system("chcp 1252 > nul");
	// Criando vari�veis
	float altura, largura, comprimento, total;
	// pergunta
	cout << "Digite as dimens�es de altura, largura e comprimento separadas apenas por 1 espa�o, assim ser� calculado o volume do cubo." << endl;
	// Leitura de resposta
	cin >> altura;
	cin >> largura;
	cin  >> comprimento;
	// Calculo
	total = altura * comprimento * largura;
	// Resultado
	cout << "O volume � " << total << "cm�";

	// Usando os comandos de "cin" sejam em linha unica ou em varias linhas conseguimos ler apenas com um espa�o entre cada n�mero,
	// sem necessidade de usar o enter para cada numero
}