#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float peso;
	peso = 30;
	cout << peso;
	delete peso;
	return 0;
}

// N�o funciona pois "peso" n�o foi alocada dinamicamente, eu n�o tenho controle sobre essa memoria da mesma forma que se tem controle sobre um ponteiro
// 