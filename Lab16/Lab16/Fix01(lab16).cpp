#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Constante char para guardar os meses 
	const char* meses[12] = { "Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	// Vetor para guardar quanto foi vendido no m�s
	unsigned int vet[12];
	// Come�o da entrada de valores 
	int total = 0;	// Somador do total
	cout << "Digite o n�mero de livros vendidos: " << endl;		
	// La�o for para receber os valores referentes a cada m�s
	for (int i = 0; i < 12; i++) {
		cout << meses[i] << ": ";	// recebe do usu�rio
		cin >> vet[i];				// leitura
		total = total + vet[i];		// Soma do total
	}
	// Sa�da do total
	cout << "Em um ano foram vendidos " << total << " livros";

	return 0;
}

/*
1. Voc� est� vendendo o livro �C++ s� do bom�. 
Escreva um programa que te permita armazenar o n�mero de livros vendidos mensalmente durante um ano. 
O programa deve usar um la�o para perguntar sobre o n�mero de vendas de cada m�s,
exibindo o nome do m�s (use um vetor de const char * inicializado para os nomes dos meses).
Use um vetor de inteiros para armazenar a quantidade de livros vendidos em cada m�s.
O programa deve calcular e exibir o n�mero total de livros vendidos no ano.

Digite o n�mero de livros vendidos:
Janeiro: 30
Fevereiro: 45
�
Dezembro: 120
Em um ano foram vendidos 565 livros.
*/