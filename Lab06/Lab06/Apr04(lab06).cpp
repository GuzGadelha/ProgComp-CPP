#include <iostream> 
using namespace std;

long long calculo(long long, long long);

int main() {
	system("chcp 1252 > nul");

	long long num1 = 200530;
	long long num2 = 420800;
	long long resultado = (num1 * num2);
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(num1, num2) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}

// O problema � que os numeros na conta direto na main n�o eram realmente do tipo long long
// se eu colocalos dentro de uma variavel long long eu asseguro que est� no tipo correto
