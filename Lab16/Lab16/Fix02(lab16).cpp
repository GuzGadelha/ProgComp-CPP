#include <iostream>
using namespace std;

struct carros {
	char fab[10];
	int anoFab;
};

int main() {
	system("chcp 1252 > nul");
	// tamanho
	cout << "Quantos carros v�o ser cat�logados? ";
	int tam;
	cin >> tam;
	// Vetor din�mico
	carros* vet = new carros[tam];
	// La�o FOR
	for (int i = 0; i < tam; i++) {
		cout << "Carro #" << i + 1 << endl;
		cout << "Marca: ";
		cin >> vet[i].fab;
		cout << "Ano: ";
		cin >> vet[i].anoFab;
		cout << endl;
	}
	cout << "\n\n";
	cout << "Aqui est� sua cole��o: \n";
	for (int i = 0; i < tam; i++) {
		cout << vet[i].anoFab << " " << vet[i].fab << endl;
	}


	return 0;
}

