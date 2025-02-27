#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// variaveis e ponteiros
	char carac = 'A';
	char* pont = &carac;
	// Output
	cout << "Sem ponteiro: " << char(carac + 1) << endl;
	cout << "Com ponteiro: " << char(*pont + 1);

	return 0;
}