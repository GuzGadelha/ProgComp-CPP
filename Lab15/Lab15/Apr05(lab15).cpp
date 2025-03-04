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
	cout << "Digite seu valor n�merico: ";
	int num;
	cin >> num;
	// Fun��o
	ASCII* pont = atribui(letra, num);
	// Sa�da
	cout << "Caractere: " << pont->carac << "N�mero: " << pont->val;
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
Crie uma fun��o que recebe um valor inteiro e um caractere, e retorna o endere�o de um elemento do tipo ASCII, alocado dinamicamente na mem�ria.
O programa principal deve chamar a fun��o passando valores lidos do usu�rio,
receber o retorno em um ponteiro, 
exibir os valores de retorno 
e deletar a mem�ria que foi alocada dentro da fun��o.
Dica: fun��es que retornam mem�ria alocada s�o perigosas. � f�cil esquecer de
guardar o endere�o de retorno para dar o delete.
*/