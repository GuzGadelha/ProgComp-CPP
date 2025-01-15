/*
5. Escreva um programa que receba dois nomes pela linha de comando e exiba uma
mensagem, como mostrado no exemplo abaixo.
a. Execute o programa pelo Developer Command Prompt.
C:\Users\Aluno\Source\Repos\ProgComp\Debug>ProgComp.exe Eu amo
Eu amo programar!
b. O que acontece se o usuário não digitar as 3 palavras após o nome do programa?
C:\Users\Aluno\Source\Repos\ProgComp\Debug>ProgComp.exe Eu
???
Dica: se o programa verificar a quantidade de argumentos recebidos, não
deve acontecer nada.
*/

#include <iostream>
using namespace std;

int main() {
	// recebendo primeira palavra 
	cout << "Digite a primeira palavra: ";
	char palavraUm[20];
	cin >> palavraUm;
	// pula linha
	cout << endl;
	// recebendo segunda palavra
	cout << "Digite a segunda palavra: ";
	char palavraDois[20];
	cin >> palavraDois;
	// escrevendo a frase
	cout << palavraUm << palavraDois << " programar!";

}