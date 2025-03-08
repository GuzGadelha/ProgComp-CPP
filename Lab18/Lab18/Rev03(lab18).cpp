#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int n;
	cout << "Digite um número entre 0-10\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Sim, 7 é meu número favorito.\n";

	return 0;
}

/*
3. Reescreva o programa abaixo usando os laços for e while.

int n;
cout << "Digite um número entre 0-10\n";
do
{
cin >> n;
}
while (n != 7);
cout << "Sim, 7 é meu número favorito.\n";

O programa abaixo vai receber valores repetidas vezes até q o usuário digite 7, caso ele digite 7 vai imprimir
"Sim, 7 é meu número favorito.\n" e parar o laço

*/