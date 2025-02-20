#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	int vetor[5] = { 1, 1, 1, 1, 1 };
	// Saída(cabeçalho)
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;
	cout << "-----------------------" << endl;
	// Entrada 
	// posiçao
	cout << "Alterar posição: ";
	int posicao; cin >> posicao;
	posicao = posicao - 1;
	// Novo valor 
	cout << "Novo valor: ";
	cin >> vetor[posicao];
	// Saída resultado
	cout << "-----------------------" << endl;
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;
	return 0;
}