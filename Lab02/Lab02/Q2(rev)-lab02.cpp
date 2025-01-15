/* 2. Repita o exercício anterior usando um cout para exibir cada linha. Depois crie 
outra versão que continue a usar três cout’s, porém com o texto aparecendo na 
mesma linha, como mostrado abaixo. 
"Bem-vindo ao mundo do C++" */

// Versão com um cout para cada linha
#include <iostream>
using namespace std;

int main() {
	cout << "Bem vindo" << endl; 
	cout << "ao mundo" << endl;
	cout << "do C++" << endl;
}

/* Versão com tudo na mesma linha
* basta não usar o "endl"

	#include <iostream>
	using namespace std;

	int main() {
		cout << "Bem vindo ";
		cout << "ao mundo ";
		cout << "do C++";
	}
*/