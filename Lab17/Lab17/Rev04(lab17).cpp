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
 4. O fragmento de código abaixo é válido? Se sim, o que ele vai mostrar na tela?

 cout << boolalpha;
 cout << (cin >> x, x > 0) << endl;

 é invalído apenas por causa da declaração inexistente do x, caso essa existisse sería um codigo correto, 
 ele lé um numero e caso ele seja positivo imprime true, se ele for menor ou igual a zero imprime false
*/