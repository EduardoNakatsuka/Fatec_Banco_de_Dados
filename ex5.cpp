/*
    5 - Escreva um algoritmo que leia uma quantidade desconhecida de
        números e conte quantos deles
        estão nos seguintes intervalos:
            [0-25],
            [26-50],
            [51-75] e
            [76-100].
        A entrada de dados deve terminar quando for
            lido um número negativo.
*/

#include <iostream>
using namespace std;

int main () {
    int firstRangeQty = 0;
    int secondRangeQty = 0;
    int thirdRangeQty = 0;
    int fourthRangeQty = 0;
    int i = 0;
    int currentNumber = 0;

    cout << "Digite um numero: ";
    cin >> currentNumber;

    while (currentNumber > 0) {
        if (currentNumber <= 25) {
            firstRangeQty++;
        } else if (currentNumber <= 50) {
            secondRangeQty++;
        } else if (currentNumber <= 75) {
            thirdRangeQty++;
        } else if (currentNumber <= 100) {
            fourthRangeQty++;
        }

        cout << "\nDigite outro numero: ";
        cin >> currentNumber;
    }

    cout << "O total de numeros entre [0-25] é: " << firstRangeQty << "\n";
    cout << "O total de numeros entre [26-50] é: " << secondRangeQty << "\n";
    cout << "O total de numeros entre [51-75] é: " << thirdRangeQty << "\n";
    cout << "O total de numeros entre [76-100] é: " << fourthRangeQty << "\n";
}