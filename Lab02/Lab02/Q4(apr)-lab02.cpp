#include <iostream>
using namespace std;

int main() {
    system("chcp 1252 > nul");
    // Declarando as variaveis, nesse caso arrays
    char pri[50], seg[50], ter[50];
    // Solicita os 3 argumentos na mesma linha
    cout << "Digite tecnologias que vc está aprendendo, separadas apenas por um espaço: ";
    cin >> pri >> seg >> ter;
    // Exibe o primeiro e o último argumento na mensagem
    cout << "Estou aprendendo " << pri << "/" << ter << "!" << endl;

}