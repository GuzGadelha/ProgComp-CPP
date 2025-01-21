#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Variáveis5
	float idade, numcigarro, preco, total;
	// Leitura
	cout << "A quantos anos você fuma? ";
	cin >> idade;
	cout << "Quantos cigarros você fuma por dia? ";
	cin >> numcigarro;
	cout << "Qual o preço médio de uma carteira de cigarros? ";
	cin >> preco;
	// Calculo
	total = (((idade * 365) * numcigarro) / 20)*preco;
	// Resultado
	cout << "Você gastou até agora " << total << "  com cigarros. ";
}

// Fiz da melhor forma possível mas se soubesse apenas exibir a quantidade de casas após a vírgula que eu quisesse ficaria melhor
