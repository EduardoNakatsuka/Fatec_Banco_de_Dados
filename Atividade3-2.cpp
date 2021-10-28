#include <iostream>
using namespace std;

int main () {
    float result, radius;
    const float pi = 3.14;

    cout << "Digite o raio : ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Impossivel calcular altura menor que 0: ";
        return 0;
    }
    result = pi * (radius * radius);

    cout << "\nArea do circulo e: " << result;
	return 0;
}