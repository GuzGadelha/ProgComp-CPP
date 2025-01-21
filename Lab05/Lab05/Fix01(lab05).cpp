#include <iostream>
using namespace std;

void horas(int x, int y);
int x, y;

int main() {
	system("chcp 1252 > nul");

	cout << "entre com o valor da hora:\n";
	cin >> x;
	cout << "agora coloque os minutos:\n";
	cin >> y;

	horas(x, y);

}

void horas(int x, int y) {

	cout << "agora são: " << x << ":" << y;
}