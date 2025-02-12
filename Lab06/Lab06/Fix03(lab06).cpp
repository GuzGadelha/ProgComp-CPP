#include <iostream>
using namespace std;

#define yellow "\033[0;33m"

int main() {
	system("chcp 1252 > nul");
	// Variáveis
	short menor;
	int normal;
	long longo;
	long long maior;
	// Saída
	cout << yellow << "short:     " << sizeof(short) << " bytes\n";
	cout << yellow << "int:       " << sizeof(int) << " bytes\n";
	cout << yellow << "long:      " << sizeof(long) << " bytes\n";
	cout << yellow << "long long: " << sizeof(long long) << " bytes\n";
	cout << "-------------------\n";
	cout << yellow << "Total =    " << (sizeof(short) + sizeof(int) + sizeof(long) + sizeof(long long)) << " bytes";

	return 0;
}