#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	// Vetores
	char vetorChar[5] = { 'A', 'B', 'C', 'D', 'E' };
	string str = {'a', 'b', 'c', 'd', 'e', '\0'};
	// Exibição
	cout << vetorChar << endl;
	cout << str;
	return 0;
}

// O vetor de caracteres não tem o caractere \0 no final, 
// logo o cout não vai saber quando ele acaba, por isso
// o cout vai exibir lixo nas memorias depois do vetor até achar uma memoria
// que esteja zerada, correspondente ao caracter e\0