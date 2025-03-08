#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char entrada[100]; // Vetor para armazenar o nome do jogador e o time
    cout << "Digite jogador/time: ";
    cin >> entrada;

    int posicaoBarra;
    // Localiza a posição da barra usando um laço for
    for (int i = 0; i < strlen(entrada); i++) {
        if (entrada[i] == '/') {
            posicaoBarra = i - 1 ;
            break;
        }
    }

    if (posicaoBarra != -1) {
        entrada[posicaoBarra] = '\0'; // Divide o nome do jogador e o time
        char* jogador = entrada; // Ponteiro para o nome do jogador
        char* time = &entrada[posicaoBarra + 1]; // Ponteiro para o nome do time

        cout << "O nome do jogador tem " << strlen(jogador) << " letras." << endl;
        cout << "O seu time é o " << time << "." << endl;
    }
    else {
        cout << "Formato inválido. Por favor use jogador/time." << endl;
    }

    return 0;
}


/*
1. Construa um programa que leia o nome de um jogador de futebol e seu respectivo time para um vetor de caracteres, como no exemplo abaixo.
O nome do jogador e o nome do time sempre estarão separados por uma barra e sem espaços.
Use um laço for para localizar a posição do caractere '/' dentro do vetor e coloque um ponteiro apontando para o caractere seguinte.
Mostre a quantidade de letras que tem o nome do jogador e, usando o ponteiro, mostre o nome do time.

Digite jogador / time: Pele / Santos
O nome do jogador tem 4 letras.
O seu time é o Santos.
*/