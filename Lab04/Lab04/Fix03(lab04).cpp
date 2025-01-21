#include <iostream>
using namespace std;

void um();
void dois();
void tres();

int main() {

	system("chcp 1252 > nul");

	cout << "começando agora\n";
	um(); dois(); tres();
	cout << endl;
	cout << "pronto!";

	return 0;

}

void um() {
	cout << "um ";
}
void dois() {
	cout << "dois ";
}
void tres() {
	cout << "três ";
}