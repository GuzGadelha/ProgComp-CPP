#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");

        // Extrapola o número de dígitos significativos da mantissa
        float f1 = 24980154.845f;
        double d1 = 293849384958473847.394;

        // Extrapola o maior expoente possível
        float f2 = 2e40f;
        double d2 = 2e315;

        // Exibir valores
        cout << "Extrapolando a mantissa:" << endl;
        cout << "float f1 = " << f1 << endl;
        cout << "double d1 = " << d1 << endl;

        cout << "\nExtrapolando o expoente:" << endl;
        cout << "float f2 = " << f2 << endl;
        cout << "double d2 = " << d2 << endl;

   return 0;
}
