#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vari�veis5
	float idade, numcigarro, preco, total;
	// Leitura
	cout << "A quantos anos voc� fuma? ";
	cin >> idade;
	cout << "Quantos cigarros voc� fuma por dia? ";
	cin >> numcigarro;
	cout << "Qual o pre�o m�dio de uma carteira de cigarros? ";
	cin >> preco;
	// Calculo
	total = (((idade * 365) * numcigarro) / 20)*preco;
	// Resultado
	cout << "Voc� gastou at� agora " << total << "  com cigarros. ";
}

// Fiz da melhor forma poss�vel mas se soubesse apenas exibir a quantidade de casas ap�s a v�rgula que eu quisesse ficaria melhor
