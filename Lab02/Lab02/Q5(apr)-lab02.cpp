#include <iostream>
using namespace std;

int main() {
    system("chcp 1252 > nul");
    // Declara��o de vari�vel
    char app[50]; 
    // Nome do app
    cout << "Digite o nome do aplicativo (ex: calc, notepad, mspaint): ";
    cin >> app;
    // Executa o comando para abrir o app
    system(app);

}