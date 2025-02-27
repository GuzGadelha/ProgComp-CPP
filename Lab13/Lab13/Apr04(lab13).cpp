#include <iostream> 
using namespace std;
enum semana { Segunda, Terca, Quarta, Quinta, Sexta };
int main()
{
	char dias[12][10] =
	{
	"Segunda", "Terca", "Quarta", "Quinta", "Sexta"
	};
	for (semana ind = Segunda; ind <= Sexta; ind = semana(ind + 1))
		cout << dias[ind] << endl;
	return 0;
}