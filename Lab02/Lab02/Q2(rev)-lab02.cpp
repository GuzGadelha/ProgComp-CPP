/* 2. Repita o exerc�cio anterior usando um cout para exibir cada linha. Depois crie 
outra vers�o que continue a usar tr�s cout�s, por�m com o texto aparecendo na 
mesma linha, como mostrado abaixo. 
"Bem-vindo ao mundo do C++" */

// Vers�o com um cout para cada linha
#include <iostream>
using namespace std;

int main() {
	cout << "Bem vindo" << endl; 
	cout << "ao mundo" << endl;
	cout << "do C++" << endl;
}

/* Vers�o com tudo na mesma linha
* basta n�o usar o "endl"

	#include <iostream>
	using namespace std;

	int main() {
		cout << "Bem vindo ";
		cout << "ao mundo ";
		cout << "do C++";
	}
*/