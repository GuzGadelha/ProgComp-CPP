#include <iostream>
using namespace std;

struct color {
	unsigned int red;
	unsigned int green;
	unsigned int blue;
};

istream& operator>>(istream& in, color& cor) {
	in.ignore(4);
	in >> cor.red;
	in.ignore(1);
	in >> cor.green;
	in.ignore(1);
	in >> cor.blue;
	in.ignore(2);
	return in;
}

ostream& operator<<(ostream& out, color& cor) {
	out << "RGB(";
	out << cor.red;
	out << ", ";
	out << cor.green;
	out << ", ";
	out << cor.blue;
	out << ")" << endl;
	return out;
}

color operator+(color cor1 , color cor2) {
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

color operator*(color cor1, color cor2) {
	color cor3;
	// Atribuições e soma
	cor3.red = cor1.red * cor2.red;
	cor3.green = cor1.green * cor2.green;
	cor3.blue = cor1.blue * cor2.blue;
	// IF
	if ((cor1.red * cor2.red) >= 255)
		cor3.red = 255;
	if ((cor1.green * cor2.green) >= 255)
		cor3.green = 255;
	if ((cor1.blue * cor2.blue) >= 255)
		cor3.blue = 255;
	// Retorno 
	return cor3;
}

int main() {
	system("chcp 1252 > nul");
	// Entrada
	cout << "Digite duas cores: ";
	// Atribuição e chamada de função para entrada
    color primeiraCor = {};
    color segundaCor = {};
	cin >> primeiraCor;
	cin >> segundaCor;
	// Chamada de funções SOMA e Saída do resultado
	color soma = primeiraCor + segundaCor;
	cout << "Soma =" << soma;
	// Chamada de funções MULT e Saída do resultado
	color mult = primeiraCor * segundaCor;
	cout << "Multiplicação = " << mult;

	return 0;
}