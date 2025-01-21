#include <iostream>
#include <cmath>
using namespace std;

double x, y;

int main() {
	system("chcp 1252 > nul");

	cout << "selecione os valores para X e Y (coordenadas)\n";
	cin >> x >> y;

	double teta = (atan2(y, x) * 180) / 3.141592;

	cout << "o angulo do vetor � " << teta << "� graus.";

}

/*As coordenadas polares representam um vetor pelo seu �ngulo com o eixo
horizontal do plano cartesiano e pelo seu comprimento, tamb�m chamado de
norma ou m�dulo. O �ngulo que o vetor forma com a horizontal pode ser
encontrado pelo arco tangente:

?? = atan2 * (??/??)

A fun��o atan2 da biblioteca <cmath> retorna o �ngulo em radianos. Para obter o
�ngulo em graus � preciso fazer a convers�o, multiplicando o resultado por 180 e
dividindo por PI.
Escreva uma fun��o que receba as coordenadas (x,y) de um vetor e retorne seu
�ngulo em graus.
*/