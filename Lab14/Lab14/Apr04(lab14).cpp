#include <iostream>
using namespace std;


enum tipos { JPG, PNG, BMP };

struct imagem{
	char nome[50];
	float largura;
	float altura;
	tipos tipo;
};

void detalhes(imagem*);

ostream& operator<< (ostream& out, tipos& tip) {
	if (tip == 0)
		out << "JPG";
	if (tip == 1)
		out << "PNG";
	if (tip == 2)
		out << "BMP";
	return out;
}

int main() {
	system("chcp 1252 > nul");
	imagem img = { "\"Ola-mundo.png\"", 1920, 1080, JPG };
	detalhes(&img);
	


	return 0;
}

void detalhes(imagem* pont) {
	cout << "A imagem " << pont->nome << " com tamanho " << pont->largura << "x" << pont->altura << " tem formato " << pont->tipo;
}