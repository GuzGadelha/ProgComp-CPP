#include <iostream>
#include <cmath>
using namespace std;

double coorPol(double x, double y) {

	const double PI = 3.141592;

	double teta = (atan2(y, x) * 180) / PI;

	cout << "o angulo do vetor é " << teta << "° graus.";

	return teta;
}