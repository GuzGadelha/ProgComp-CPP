#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

	cout << boolalpha; 
	int x;
	cout << (cin >> x, x > 0) << endl;

	return 0;
}

/*
 4. O fragmento de c�digo abaixo � v�lido? Se sim, o que ele vai mostrar na tela?

 cout << boolalpha;
 cout << (cin >> x, x > 0) << endl;

 � inval�do apenas por causa da declara��o inexistente do x, caso essa existisse ser�a um codigo correto, 
 ele l� um numero e caso ele seja positivo imprime true, se ele for menor ou igual a zero imprime false
*/