#include <iostream>
using namespace std;

float medharm(float n1, float n2);

int main() {
	system("chcp 1252 > nul");

	float n1, n2, tres;
	cout << "entre com um número: ";
	cin >> n1;
	cout << "entre com outro número: ";
	cin >> n2;

	tres = medharm(n1, n2);

	cout << "a media harmonica ficou = " << tres;

}

float medharm(float n1, float n2) {

	float res;
	res = 2.0 * n1 * n2 / (n1 + n2);

	return res;
}