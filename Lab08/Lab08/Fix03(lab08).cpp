#include <iostream>
using namespace std;

double calculaVelhice(double);

int main() {
	system("chcp 1252 > nul");

	cout << "Digite sua idade em anos: ";
	double idade;
	cin >> idade;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);
	cout << idade << " anos correspondem a " << calculaVelhice(idade);


	return 0;
}
double calculaVelhice(double idadeAtual) {
	double idadeEmSegundos = idadeAtual * 3.156e7;
	return idadeEmSegundos;
}
