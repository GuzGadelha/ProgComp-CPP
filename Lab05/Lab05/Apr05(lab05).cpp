#include <iostream>
#include <cmath>
using namespace std;

double x, y;

int main() {
	system("chcp 1252 > nul");

	cout << "selecione os valores para X e Y (coordenadas)\n";
	cin >> x >> y;

	double teta = (atan2(y, x) * 180) / 3.141592;

	cout << "o angulo do vetor é " << teta << "° graus.";

}

/*As coordenadas polares representam um vetor pelo seu ângulo com o eixo
horizontal do plano cartesiano e pelo seu comprimento, também chamado de
norma ou módulo. O ângulo que o vetor forma com a horizontal pode ser
encontrado pelo arco tangente:

?? = atan2 * (??/??)

A função atan2 da biblioteca <cmath> retorna o ângulo em radianos. Para obter o
ângulo em graus é preciso fazer a conversão, multiplicando o resultado por 180 e
dividindo por PI.
Escreva uma função que receba as coordenadas (x,y) de um vetor e retorne seu
ângulo em graus.
*/