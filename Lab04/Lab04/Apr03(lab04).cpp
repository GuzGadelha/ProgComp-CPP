#include <iostream>
using namespace std;

void media();

int main() {
	system("chcp 1252 > nul");

	media();

	return 0;
}

void media() {

	float n1, n2, m;

	cout << "digite o 1� n�mero: \n";
	cin >> n1;
	cout << "digite o 2� n�mero: \n";
	cin >> n2;

	m = (n1 + n2) / 2.f;

	cout << "a media desses dois � : " << m;

}