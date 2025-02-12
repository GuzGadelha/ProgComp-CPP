#include <iostream>
using namespace std;

#define green "\033[1;37;42m"

int main() {
	system("chcp 1252 > nul");
	int ZERO = 0;
	cout << green << "Inicialmente total = " << ZERO << " (ZERO)\n";
	ZERO = 50;
	cout << green << "Depois da 'atribuição' total = " << ZERO << endl;
	ZERO = 0;

	return ZERO;
}