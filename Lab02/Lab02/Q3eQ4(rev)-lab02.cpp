/* 3. Crie um novo projeto sem alterar nenhuma configuração do projeto, digite, 
compile e execute o programa abaixo: */
#include <iostream> 
using namespace std;
int main()
{
	system("chcp 1252 > nul");
	// exibindo uma frase que contém acentos 
	cout << "Acentuação é possível?" << endl;
	// leia uma palavra que contenha acentos 
	char palavra[40];
	cin >> palavra;
	// exibindo o que foi lido 
	cout << palavra << endl;
}

// Embora na pergunta os acentos estejam aparecendo de forma errada,
// a char "palavra" apareceu com todos os acentos corretos no meu computador 

/* 4. Execute o programa da questão anterior diretamente do Prompt de Comando.
Houve alguma diferença? Agora execute o comando “chcp 1252” no prompt de
comando e tente novamente rodar o programa. Em um programa C++, podemos
executar um comando do sistema usando a função system. Insira a chamada de
sistema abaixo no início do programa e veja o resultado. */

//resposta: Funcionou tudo corretamente após o uso do comando do sistema que permite ler acentuações 