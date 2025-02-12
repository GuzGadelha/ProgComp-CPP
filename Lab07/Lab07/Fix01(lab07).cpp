#include <iostream>
using namespace std;
char conversor(int);

int main() {
	system("chcp 1252 > nul");

	cout <<"Digitre uma numero: ";
	int num;
	cin >> num;
	cout << "Código: " << conversor(num);

	return 0;
}

char conversor(int num) {
	char letra;
	letra = num;
	return letra;
}

// 65  = A
// 
// 80  = P
// 114 = r
// 111 = o
// 103 = g
// 67  = C
// 111 = o
// 109 = m
// 112 = p