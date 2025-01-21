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

	cout << "�ndice de Massa Corporal (IMC)\n";
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

/*3. Construa uma fun��o que calcule o �ndice de massa corporal (IMC) de um
indiv�duo. A fun��o receber� a altura (m) e a massa (kg) do indiv�duo e retornar� o
seu IMC para a fun��o principal. A fun��o principal deve mostrar o resultado.

Use a f�rmula: IMC = massa / (altura) �

�ndice de Massa Corporal (IMC)
------------------------
Altura: 1.78
Massa: 75
IMC: 23.6713
*/