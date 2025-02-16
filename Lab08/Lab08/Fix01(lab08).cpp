#include <iostream>
using namespace std;

float IMC(float altura, float massa);
double DIMC(double altura, double massa);

int main() {
	system("chcp 1252 > nul");
	//cout << "Digite sua altura em metros :";
	//int altura; cin >> altura;
	//cout << "Digite sua massa corporal em quilos : ";
	//int massa; cin >> massa;
	// Letra A
	float altura = 1.75f;
	float massa = 80.0f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(15);
	cout << "FLOAT: Seu �ndice de massa corporal(IMC) : " << IMC(altura, massa) << endl;
	cout << "DOUBLE: Seu �ndice de massa corporal(IMC) : " << DIMC(altura, massa) << endl;

	return 0;
}
float IMC(float altura, float massa) {
	return massa / (altura * altura);
}
double DIMC(double altura, double massa) {
	return massa / (altura * altura);
}
// Letra B
// A diferen�a acontece porque o float s� consegue guardar 6 digitos significativos, enquanto o double consegue guardar 15 digitos significativos.
// os numeros ap�s o 6� digito(no caso do float) s�o arredondados, o que pode causar uma diferen�a no resultado final.
// Letra C
// Sim o programa est� fazendo arredondamentos, no caso do float depois do 6� digito significativo e
// os resultados com float est�o corretos apenas at� o 6� digito
// Letra D
// Na minha opni�o deveriamos usar double pela precis�o melhorada da conta