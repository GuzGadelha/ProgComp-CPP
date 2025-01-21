#include <iostream>
using namespace std;

int main() {
	//Leitor de caracteres
	system("chcp 1252 > nul");
	// Criando variáveis
	float altura, largura, comprimento, total;
	// pergunta
	cout << "Digite as dimensões de altura, largura e comprimento separadas apenas por 1 espaço, assim será calculado o volume do cubo." << endl;
	// Leitura de resposta
	cin >> altura;
	cin >> largura;
	cin  >> comprimento;
	// Calculo
	total = altura * comprimento * largura;
	// Resultado
	cout << "O volume é " << total << "cm³";

	// Usando os comandos de "cin" sejam em linha unica ou em varias linhas conseguimos ler apenas com um espaço entre cada número,
	// sem necessidade de usar o enter para cada numero
}