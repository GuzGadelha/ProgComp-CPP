#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	float valores[3] = {1.5, 2.0, 1.0};
	float quantidade[3];
	float total[3];
	// Entrada 
	cout << "Prezado cliente,\n";
	cout << "Digite a quantidade de quilos desejados: \n";
	cout << "Alface: "; cin >> quantidade[0];
	cout << "Beterraba: "; cin >> quantidade[1];
	cout << "Cenoura: "; cin >> quantidade[2];
	// Cálculo
	total[0] = valores[0] * quantidade[0];
	total[1] = valores[1] * quantidade[1];
	total[2] = valores[2] * quantidade[2];
	// Configuração do cout
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	// Saída
	cout << "---------------------" << endl;
	cout << "Alface    = R$" << total[0] << endl;
	cout << "Beterraba = R$" << total[1] << endl;
	cout << "Cenoura   = R$" << total[2] << endl;
	cout << "---------------------" << endl;
	cout << "Total\t= R$" << total[0] + total[1] + total[2];


	return 0;
}