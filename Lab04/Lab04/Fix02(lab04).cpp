#include <iostream>
using namespace std;

void linha(void);
void pequena(void);
void media(void);
void grande(void);

int main() {

	system("chcp 1252 > nul");

	pequena();
	cout << endl;
	media();
	cout << endl;
	grande();
	cout << endl;
	cout << "Programa��o de computadores" << endl;
	grande();
	cout << endl;
	media();
	cout << endl;
	pequena();

	return 0;

}

void linha(void) {
	cout << "----------";
}

void pequena(void) {
	linha();
}
void media(void) {
	linha(); linha();
}
void grande(void) {
	linha(); linha(); linha();
}

// Tem como fazer com o "cout << endl" dentro das fun��es pequena, media e grande, ou escrev~-lo na fun��o main, eu prefiro na main pois me da mais op��es