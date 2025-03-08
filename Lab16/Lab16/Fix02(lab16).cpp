#include <iostream>
using namespace std;

struct carros {
	char fab[10];
	int anoFab;
};

int main() {
	system("chcp 1252 > nul");
	// tamanho
	cout << "Quantos carros vão ser catálogados? ";
	int tam;
	cin >> tam;
	// Vetor dinâmico
	carros* vet = new carros[tam];
	// Laço FOR
	for (int i = 0; i < tam; i++) {
		cout << "Carro #" << i + 1 << endl;
		cout << "Marca: ";
		cin >> vet[i].fab;
		cout << "Ano: ";
		cin >> vet[i].anoFab;
		cout << endl;
	}
	cout << "\n\n";
	cout << "Aqui está sua coleção: \n";
	for (int i = 0; i < tam; i++) {
		cout << vet[i].anoFab << " " << vet[i].fab << endl;
	}


	return 0;
}

