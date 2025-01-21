#include <iostream> 
using namespace std;

int main()
{
	system("chcp 850 > nul");
	//Caminhão
	// Espaço antes do desenho
	cout << "\n\n"; 
	// Parte de cima do caminhão
	cout << "\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB"; 
	// Parte debaixo do caminhão
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";
	// Mais espaço
	cout << "\n\n";

	// Caixas com C++ escrito
	// Parte de cima da caixa
	cout << "\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xBB";
	// Parte do meio
	cout << "\n\t\xBA C++ \xBA";
	// Parte debaixo
	cout << "\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xBC";
	cout << "\n\n";

	// Exemplo para mostrar que eu entendi
	//Carrinho
	cout << "\n\xDC\xDB\xDB\xDB\xDC";
	cout << "\n\xDFO\xDFO\xDF";
	// Placa
	cout << "\n\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
	cout << "\n\xBA Gustavo \xBA";
	cout << "\n\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";

}


	// ANOTAÇÕES SOBRE O CAMINHÃO
	// "\t" significa um espaço preto antes, quase como uma margem
	// "\xDC" e "\xDF" São quadrados únicos, simples, entretanto,
	//        DC é mais para baixo e DF é mais para cima
	// "\xDB" São retângulos, espaços de 2 quadrados para baixo
	// Em resumo aprendemos que cada caracter tem 2 espaços, um em cima e um embaixo
	// DC ativa apenas o quadrado debaixo
	// DF apenas o quadrado de cima
	// DB ativa os dois ao mesmo tempo

	// ANOTAÇÕES SOBRE A 'PLACA'
	// "\xC9" é o canto Superior esquerdo
	// "\xC8" é o canto Inferior esquerdo
	// "\xCD" é a barra do meio ( = )  
	// "\xBA" é a barra reta
	// "\xBB" é o canto Superior direito
	// "\xBC" é o canto Inferior direito