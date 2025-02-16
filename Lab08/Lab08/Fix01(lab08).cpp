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
	cout << "FLOAT: Seu índice de massa corporal(IMC) : " << IMC(altura, massa) << endl;
	cout << "DOUBLE: Seu índice de massa corporal(IMC) : " << DIMC(altura, massa) << endl;

	return 0;
}
float IMC(float altura, float massa) {
	return massa / (altura * altura);
}
double DIMC(double altura, double massa) {
	return massa / (altura * altura);
}
// Letra B
// A diferença acontece porque o float só consegue guardar 6 digitos significativos, enquanto o double consegue guardar 15 digitos significativos.
// os numeros após o 6º digito(no caso do float) são arredondados, o que pode causar uma diferença no resultado final.
// Letra C
// Sim o programa está fazendo arredondamentos, no caso do float depois do 6° digito significativo e
// os resultados com float estão corretos apenas até o 6° digito
// Letra D
// Na minha opnião deveriamos usar double pela precisão melhorada da conta