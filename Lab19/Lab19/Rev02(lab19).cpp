#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int matriz[3][2];
	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 2; c++) {
			cin >> matriz[l][c];
		}

	}
	cout << "- - - - - - " << endl;
	for (int c = 0; c < 2; c++) {
		for (int l = 0; l < 3; l++) {
			 cout << matriz[l][c];
		}
		cout << endl;
	}

	return 0;
}