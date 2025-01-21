#include <iostream> 
using namespace std;

int main()
{
	system("chcp 850 > nul");
	//Caminh�o
	// Espa�o antes do desenho
	cout << "\n\n"; 
	// Parte de cima do caminh�o
	cout << "\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB"; 
	// Parte debaixo do caminh�o
	cout << "\n\t\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";
	// Mais espa�o
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


	// ANOTA��ES SOBRE O CAMINH�O
	// "\t" significa um espa�o preto antes, quase como uma margem
	// "\xDC" e "\xDF" S�o quadrados �nicos, simples, entretanto,
	//        DC � mais para baixo e DF � mais para cima
	// "\xDB" S�o ret�ngulos, espa�os de 2 quadrados para baixo
	// Em resumo aprendemos que cada caracter tem 2 espa�os, um em cima e um embaixo
	// DC ativa apenas o quadrado debaixo
	// DF apenas o quadrado de cima
	// DB ativa os dois ao mesmo tempo

	// ANOTA��ES SOBRE A 'PLACA'
	// "\xC9" � o canto Superior esquerdo
	// "\xC8" � o canto Inferior esquerdo
	// "\xCD" � a barra do meio ( = )  
	// "\xBA" � a barra reta
	// "\xBB" � o canto Superior direito
	// "\xBC" � o canto Inferior direito