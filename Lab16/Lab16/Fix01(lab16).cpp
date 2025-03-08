#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Constante char para guardar os meses 
	const char* meses[12] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	// Vetor para guardar quanto foi vendido no mês
	unsigned int vet[12];
	// Começo da entrada de valores 
	int total = 0;	// Somador do total
	cout << "Digite o número de livros vendidos: " << endl;		
	// Laço for para receber os valores referentes a cada mês
	for (int i = 0; i < 12; i++) {
		cout << meses[i] << ": ";	// recebe do usuário
		cin >> vet[i];				// leitura
		total = total + vet[i];		// Soma do total
	}
	// Saída do total
	cout << "Em um ano foram vendidos " << total << " livros";

	return 0;
}

/*
1. Você está vendendo o livro “C++ só do bom”. 
Escreva um programa que te permita armazenar o número de livros vendidos mensalmente durante um ano. 
O programa deve usar um laço para perguntar sobre o número de vendas de cada mês,
exibindo o nome do mês (use um vetor de const char * inicializado para os nomes dos meses).
Use um vetor de inteiros para armazenar a quantidade de livros vendidos em cada mês.
O programa deve calcular e exibir o número total de livros vendidos no ano.

Digite o número de livros vendidos:
Janeiro: 30
Fevereiro: 45
…
Dezembro: 120
Em um ano foram vendidos 565 livros.
*/