#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");

	int num;

	cout << "gerando numero pseudoaleatorio" << endl;
	srand(time(NULL));
	cout << rand() << endl;

	num = rand();

	if (num > 16834) {
		cout << "GRANDE" << endl;
	}
	else {
		cout << "PEQUENO";
	}

}

// não sei se podia usar if mas eu usei