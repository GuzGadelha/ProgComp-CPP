#include <iostream>
using namespace std;

enum situacao { Aprovado, Trancado, Reprovado };

union names {
	char nome[50];
	unsigned int matricula;
};

struct aluno {
	names nomeOuMat;
	unsigned int codigoDisc;
	situacao sitDisc;
};

istream& operator>> (istream& in, situacao& x) {
	char teste[10];
	in >> teste;
	if (strcmp(teste, "Aprovado") == 0 || strcmp(teste, "aprovado") == 0)
		x = Aprovado;
	if (strcmp(teste, "Trancado") == 0 || strcmp(teste, "trancado") == 0)
		x = Trancado;
	if (strcmp(teste, "Reprovado") == 0 || strcmp(teste, "reprovado") == 0)
		x = Reprovado;

	return in;
}

void exibir(aluno*);

int main() {
	system("chcp 1252 > nul");
	// Variavel tamanho do vetor
	int tam;
	// Entrada tamanho
	cout << "Quantos alunos tem na sua turma? ";
	cin >> tam;
	cin.get();
	// vetor dinâmico
	aluno* pont = new aluno[tam];
	// Entrada primeiro aluno
	cout << "Entre com os dados do primeiro aluno\n";
	// nome
	cout << "Nome: ";
	cin.getline(pont[0].nomeOuMat.nome, 50);
	// matricula
	cout << "Codígo da disciplina: ";
	cin >> pont[0].codigoDisc;
	// situação
	cout << "Situação: ";
	cin >> pont[0].sitDisc;
	// Saída
	exibir(pont);
	delete[] pont;
	return 0;
}

void exibir(aluno* pont) {
	cout << "Nome: " << pont->nomeOuMat.nome<< endl;
	cout << "Codígo da disciplina: " << pont->codigoDisc << endl;
	if (pont->sitDisc == Aprovado || pont[0].sitDisc == 0)
		cout << "Situação: Aprovado!";
	if (pont[0].sitDisc == Trancado || pont[0].sitDisc == 1)
		cout << "Situação: Trancado!";
	if (pont[0].sitDisc == Reprovado || pont[0].sitDisc == 2)
		cout << "Situação: Reprovado!";
}

/*
5. Construa um vetor dinâmico de alunos. 
O registro aluno deve ser composto por nome (ou matrícula), código da disciplina (número inteiro sem sinal), e situação da disciplina. 
A situação da disciplina deve ser uma enumeração com os valores: Aprovado, Trancado, Reprovado. 
Peça ao usuário para digitar o número de alunos do vetor e em seguida leia os dados do primeiro aluno. 
Para finalizar mostre os dados do primeiro aluno usando uma função que recebe um ponteiro para aluno.
*/