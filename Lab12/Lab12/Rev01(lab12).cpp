#include <iostream>
using namespace std;

struct color {
	unsigned int red;
	unsigned int green;
	unsigned int blue;
};

color ler();
void exibir(color);
color soma(color, color);
color mult(color, color);

int main() {
	system("chcp 1252 > nul");
	// Entrada
	cout << "Digite duas cores: ";
	// Atribuição e chamada de função para entrada
	color primeiraCor = ler();
	color segundaCor = ler();
	// Chamada de funções SOMA e Saída do resultado
	cout << "Soma = "; 
	color resultSoma = soma(primeiraCor, segundaCor);
	exibir(resultSoma);
	// Chamada de funções MULT e Saída do resultado
	cout << "Multiplicação = ";
	color resultMult = mult(primeiraCor, segundaCor);
	exibir(resultMult);

	return 0;
}

color ler() {
	color corFuncao;
	cin.ignore(4);
	cin >> corFuncao.red;
	cin.ignore(1);
	cin >> corFuncao.green;
	cin.ignore(1);
	cin >> corFuncao.blue;
	cin.ignore(2);
	return corFuncao;
}

void exibir(color exibeCor) {
	cout << "RGB(" << exibeCor.red << ", " << exibeCor.green << ", " << exibeCor.blue << ")" << endl;
}

color soma(color cor1, color cor2) {
	// Variavel local
	color cor3;
	// Atribuições e soma
	cor3.red = cor1.red + cor2.red;
	cor3.green = cor1.green + cor2.green;
	cor3.blue = cor1.blue + cor2.blue;
	// IF
	if ((cor1.red + cor2.red) >= 255)
		cor3.red = 255;
	if ((cor1.green + cor2.green) >= 255)
		cor3.green = 255;
	if ((cor1.blue + cor2.blue) >= 255)
		cor3.blue = 255;
	// Retorno 
	return cor3;
}

color mult(color cor1, color cor2) {
	// Variavel local
	color cor3;
	// Atribuições e soma
	cor3.red = cor1.red * cor2.red;
	cor3.green = cor1.green * cor2.green;
	cor3.blue = cor1.blue * cor2.blue;
	// IF
	if ((cor1.red * cor2.red) > 255)
		cor3.red = 255;
	if ((cor1.green * cor2.green) > 255)
		cor3.green = 255;
	if ((cor1.blue * cor2.blue) > 255)
		cor3.blue = 255;
	// Retorno 
	return cor3;
}