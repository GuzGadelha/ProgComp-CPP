﻿#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro();
float raio, alt;

int main() {
	system("chcp 1252 > nul");

	cout << "digite a altura do seu cilindro: ";
	cin >> alt;
	cout << "digite o raio do seu cilindro: ";
	cin >> raio;

	cout << "o volume do seu cilindro é : " << VolumeCilindro();

	return 0;
}

float VolumeCilindro() {
	float v;

	v = 3.14159 * pow(raio, 2.0) * alt;
	//V = π r^2 h

	return v;
}