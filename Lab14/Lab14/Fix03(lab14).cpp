#include <iostream>
using namespace std;

void mais(int*);
int incrementa(int);

int main() {
	system("chcp 1252 > nul");
	// Variaveis e Ponteiros 
	int num;
	int* pont = &num;
	// Entrada
	cout << "Digite um valor: ";
	cin >> num;
	// Fun��o
	mais(pont);
	// Sa�da
	cout << "Resultado ap�s mais: " << *pont << endl;
	cout << "Resultado ap�s incrementa: " << incrementa(num);

	return 0;
}

void mais(int* p) {
	++ (* p); // (*P) = num 
}
// N�o precisa de return pois ponteiros mexem direto na memoria
int incrementa(int i) {
	return ++i;
}