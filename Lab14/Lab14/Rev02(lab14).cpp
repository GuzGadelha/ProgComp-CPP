#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variaveis, vetores, ponteiros
	float torque[10] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float * pont = torque;
	// Output
	cout << "Primeiro: " << *pont << endl;
	cout << "Ultimo: " << *(pont+9);
	return 0;
}