#include <iostream>
#include <cmath>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	double fnum = 0b01111100001000000000000000000000;
	unsigned int num = 0b01111100001000000000000000000000;
	unsigned int mantissa = (num << 9) >> 9;
	unsigned int expoente = (num >> 24);
	unsigned int sinal = ((num >> 23) << 23)& 1;
	if (sinal == 0)
		sinal = +1;
	else
		sinal = -1;
	double resultado = sinal * (pow(2, (expoente-127))) * (1 + mantissa);
	cout << fnum << endl;
	cout << resultado;

	return 0;
}
