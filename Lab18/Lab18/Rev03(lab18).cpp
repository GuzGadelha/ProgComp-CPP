#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	int n;
	cout << "Digite um n�mero entre 0-10\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Sim, 7 � meu n�mero favorito.\n";

	return 0;
}

/*
3. Reescreva o programa abaixo usando os la�os for e while.

int n;
cout << "Digite um n�mero entre 0-10\n";
do
{
cin >> n;
}
while (n != 7);
cout << "Sim, 7 � meu n�mero favorito.\n";

O programa abaixo vai receber valores repetidas vezes at� q o usu�rio digite 7, caso ele digite 7 vai imprimir
"Sim, 7 � meu n�mero favorito.\n" e parar o la�o

*/