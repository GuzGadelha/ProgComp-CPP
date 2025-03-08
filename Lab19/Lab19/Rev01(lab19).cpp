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
    // laço com contador
    while (strcmp(ch, "pronto") != 0) {
        ++cont;
        cin >> ch;
    }
    // saída
    cout << "\nForam digitadas um total de " << cont << " palavras";
 
    return 0;
}

/*
1. Escreva um programa que utilize um vetor de caracteres e 
um laço para ler uma palavra por vez até que a palavra “pronto” seja encontrada.
O programa deve então mostrar o número de palavras digitadas (sem contar pronto).
Um exemplo de execução é mostrado abaixo. 

Digite palavras (pronto para parar):
Aprender C++ é uma aventura A linguagem acomoda vários paradigmas de programação
Você está pronto para aprendê-la?
Foram digitadas um total de 14 palavras.

Dica: inclua o arquivo de cabeçalho <cstring> e use a função strcmp() para fazer o teste de comparação.
*/