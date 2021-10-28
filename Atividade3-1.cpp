#include <iostream>
using namespace std;

int main () {
    float result, height, base;

    cout << "Digite a altura do retangulo: ";
    cin >> height;

    if (height <= 0) {
        cout << "Impossivel calcular altura menor que 0: ";
        return 0;
    }

    cout << "\nDigite a base do retangulo: ";
    cin >> base;

    if (base <= 0) {
        cout << "Impossivel calcular base menor que 0: ";
        return 0;
    }
    
    result = base * height;

    cout << "\nArea do retangulo e: " << result;
	return 0;
}