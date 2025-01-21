#include <iostream>
#include <cmath>
using namespace std;

void distVet();

int main() {
	system("chcp 1252 > nul");

	distVet();

}

void distVet() {

	double x, y;

	cout << "digite coordenadas X e Y de um ponto no plano\n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	double v = sqrt(pow(x, 2) + pow(y, 2));

	cout << "O tamanho do vetor � " << v;

}

/*A norma ou m�dulo de um vetor � um n�mero real que representa o comprimento
desse vetor. Dessa forma, calcular a norma de um vetor � o mesmo que calcular a
dist�ncia entre um ponto (x,y) e a origem (0,0). Utilizando |v| como a nota��o para
o m�dulo de um vetor v = (x,y) pertencente ao plano, teremos:
		  |??| = ???^2 + ??^2
Crie uma fun��o que receba as coordenadas (x,y) de um vetor e retorne seu
m�dulo. Inclua a biblioteca cmath e utilize as fun��es sqrt e pow para calcular raiz
quadrada e potencia��o.

Digite as coordenadas do vetor:
x: 10
y: 5
O tamanho do vetor � 11.1803
*/