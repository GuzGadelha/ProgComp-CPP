#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	//Variavel
	int tam;
	// Entrada
	cout << "Digite o n�mero de alunos (m�nimo 2): ";
	cin >> tam;
	// Vetor
	float* pont = new float[tam];
	// Entrada
	cout << "Digite a nota de dois alunos: ";
	cin >> pont[0] >> pont[1];
	// Sa�da
	cout << "As notas digitadas foram " << pont[0] << " e " << pont[1];

	// Libera a mem�ria alocada
	delete [] pont;

	return 0;
}