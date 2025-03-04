#include <iostream>
using namespace std;

struct ASCII {
	char carac;
	int val;
};

ASCII* atribui(char, int);

int main() {
	system("chcp 1252 > nul");
	// Entrada 
	cout << "Digite um caractere: ";
	char letra;
	cin >> letra;
	cout << "Digite seu valor númerico: ";
	int num;
	cin >> num;
	// Função
	ASCII* pont = atribui(letra, num);
	// Saída
	cout << "Caractere: " << pont->carac << "Número: " << pont->val;
	delete pont;
	return 0;
}

ASCII * atribui(char letra, int num) {
	ASCII* p = new ASCII ;
	p->carac = letra;
	p->val = num;
	return p;
}

/*
5. Defina um registro ASCII que armazena um caractere e um valor inteiro associado.
Crie uma função que recebe um valor inteiro e um caractere, e retorna o endereço de um elemento do tipo ASCII, alocado dinamicamente na memória.
O programa principal deve chamar a função passando valores lidos do usuário,
receber o retorno em um ponteiro, 
exibir os valores de retorno 
e deletar a memória que foi alocada dentro da função.
Dica: funções que retornam memória alocada são perigosas. É fácil esquecer de
guardar o endereço de retorno para dar o delete.
*/