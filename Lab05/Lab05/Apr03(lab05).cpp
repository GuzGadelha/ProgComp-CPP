#include <iostream>
#include <cmath>
using namespace std;

double IMC(double, double);

int main() {
	system("chcp 1252 > nul");

	double mas, alt;
	
	cout << "entre agora com sua altura: ";
	cin >> alt;
	cout << "entre com sua massa: ";
	cin >> mas;

	double res = IMC(mas, alt);

	cout << "Índice de Massa Corporal (IMC)\n";
	cout << "------------------------\n";
	cout << "altura: " << alt << endl;
	cout << "massa: " << mas << endl;
	cout << "IMC: " << res << endl;
	return 0;
}

double IMC(double a, double b) {
	double imc;
	imc = a / pow(b, 2);
	return imc;
}

/*3. Construa uma função que calcule o índice de massa corporal (IMC) de um
indivíduo. A função receberá a altura (m) e a massa (kg) do indivíduo e retornará o
seu IMC para a função principal. A função principal deve mostrar o resultado.

Use a fórmula: IMC = massa / (altura) ²

Índice de Massa Corporal (IMC)
------------------------
Altura: 1.78
Massa: 75
IMC: 23.6713
*/