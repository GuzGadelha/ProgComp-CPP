#include <iostream>
using namespace std;

void um();
void dois();
void tres();

int main() {

	system("chcp 1252 > nul");

	cout << "Começando agora\n";
	um(); dois(); tres();
	cout << endl;
	cout << "Pronto!";

	return 0;

}

void um() {
	cout << "Um ";
}
void dois() {
	cout << "Dois ";
}
void tres() {
	cout << "Três ";
}