#include <iostream>
#include <cstring>
using namespace std;

int main() {
    system("chcp 1252 > nul");
    // variaveis
    char ch[50];
    int cont = 0;
    // entrada
    cout << "Digite palavras (pronto para parar):" << endl;
    cout << "Entrada: ";
    cin >> ch;
    // la�o com contador
    while (strcmp(ch, "pronto") != 0) {
        ++cont;
        cin >> ch;
    }
    // sa�da
    cout << "\nForam digitadas um total de " << cont << " palavras";
 
    return 0;
}

/*
1. Escreva um programa que utilize um vetor de caracteres e 
um la�o para ler uma palavra por vez at� que a palavra �pronto� seja encontrada.
O programa deve ent�o mostrar o n�mero de palavras digitadas (sem contar pronto).
Um exemplo de execu��o � mostrado abaixo. 

Digite palavras (pronto para parar):
Aprender C++ � uma aventura A linguagem acomoda v�rios paradigmas de programa��o
Voc� est� pronto para aprend�-la?
Foram digitadas um total de 14 palavras.

Dica: inclua o arquivo de cabe�alho <cstring> e use a fun��o strcmp() para fazer o teste de compara��o.
*/