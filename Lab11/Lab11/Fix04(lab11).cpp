#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// 
	char nome[] = "C++ Primer Plus";
	//
	cout << "No vetor contem o seguinte: " << nome << endl;
	cout << "Contem " << strlen(nome) << " caracteres" << endl;
	cout << "Ocupa " << sizeof(nome) << " bytes";

	return 0;
} 