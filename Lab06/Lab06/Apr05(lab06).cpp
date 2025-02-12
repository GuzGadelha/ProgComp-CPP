#include <iostream>
using namespace std;

void isShort(long long);
void isInt(long long);

int main() {
	system("chcp 1252 > nul");
	//Entrada
	cout << "Digite um valor inteiro: ";
	long long num;
	cin >> num;
	// Chamada de função
	isShort(num);
	isInt(num);
	// Precisamos guardar os possíveis valores que formos receber na variavel maior possível
	// Apenas guardando no maior possível podemos saber sem bugs qual o número 
	// e analisar se cabe ou não nos tipos menores
	return 0;
}

void isShort(long long num) {
	if (num > SHRT_MIN && num < SHRT_MAX)
		cout << num << " cabe em 16 bits\n";
	else
		cout << num << " não cabe em 16 bits\n";
}
void isInt(long long num) {
	if (num > INT_MIN && num < INT_MAX)
		cout << num << " cabe em 32 bits\n";
	else
		cout << num << " não cabe em 32 bits\n";
}