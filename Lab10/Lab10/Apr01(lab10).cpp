#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	int vetor[5] = { 1, 1, 1, 1, 1 };
	// Sa�da(cabe�alho)
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;
	cout << "-----------------------" << endl;
	// Entrada 
	// posi�ao
	cout << "Alterar posi��o: ";
	int posicao; cin >> posicao;
	posicao = posicao - 1;
	// Novo valor 
	cout << "Novo valor: ";
	cin >> vetor[posicao];
	// Sa�da resultado
	cout << "-----------------------" << endl;
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;
	return 0;
}