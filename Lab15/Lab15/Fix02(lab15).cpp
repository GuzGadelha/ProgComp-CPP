#include <iostream>
using namespace std;

struct balao
{
	float diametro;		// di�metro em metros  
	char marca[20];		// nome da marca 
	int modelo;			// n�mero do modelo 
};

istream& operator>> (istream& in, balao& balao) {
	cout << "Qual o di�metro do balao? ";
	cin >> balao.diametro;
	cout << "De qual marca � o bal�o? ";
	cin >> balao.marca;
	cout << "De qual modelo? ";
	cin >> balao.modelo;
	return in;
}

ostream& operator<< (ostream& out, balao& balao) {
	out << "Di�metro: " << balao.diametro << endl;
	out << "Marca: " << balao.marca << endl;
	out << "Modelo: " << balao.modelo << endl;
	return out;
}

int main() {
	system("chcp 1252 > nul");
	// vetor dinamico
	balao* pont = new balao;
	// Entrada
	cin >> *pont;
	// Sa�da
	system("cls");
	cout << *pont;

	return 0;
}