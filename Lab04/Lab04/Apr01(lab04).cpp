#include <iostream>
#include <cmath>
using namespace std;

void distancia();

int main() {

	system("chcp 1252 > nul");

	distancia();

	return 0;
}

void distancia() {

	double dist;
	int px, py, qx, qy;

	cout << "defina as coordenadas de P\n";
	cin >> px >> py;
	cout << "defina as coordenadas de Q\n";
	cin >> qx >> qy;

	dist = sqrt(pow(qx - px, 2) + pow(qy - py, 2));

	cout << "a distancia entre os pontos Q e P é:" << dist;

}