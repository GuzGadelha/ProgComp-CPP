#include <iostream>
using namespace std;

int main() {

	system("chcp 1252 > nul");

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;

}

/* ao usar a semente "1" os resultados ser�o:
41
18467
6334
26500
19169

j� usando a semente "3" os numeros s�o:

48
7196
9294
9091
7031

vemos que ao mudar a semente os numeros gerados tambem mudaram, ou seja, os numeros gerados dependem exclusivamente da semente colocada. */