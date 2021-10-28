/*

    4 - Faça um programa para ler os dados de 100 funcionários de uma empresa, sendo esses dados, matrícula, idade, gênero, altura, concursado [S/N].
        Calcular e mostrar:
        a) o número de funcionárias concursadas;
        b) o número de funcionários (somente homens);
        c) a maior idade dos homens concursados;
        d) a quantidade de mulheres com mais de 30 anos sem concurso;
        e) a média das alturas dos homens com menos de 40 anos.

        // struct Worker {
        //     int registration;
        //     int age;
        //     char gender;
        //     float height;
        //     char servant;
        // };

        // int i = 0;
        // Worker workers[100];

        // for (i = 0; i <= 100; i++) {

        // }
*/

#include <iostream>
using namespace std;

int main () {
    int femaleServants = 0;
    int femaleNotServantsOlderThanThirty = 0;
    int maleWorkers = 0;
    int oldestMaleServant = 0;
    int maleBelowFortyHeightTotal = 0;
    float maleBelowFortyHeightAverage = 0.0;
    int maleBelowFortyQty = 0;
    int age = 0; // will be re-written @ every loop 
    int i = 0;
    char gender, servant;
    float height; // will be re-written @ every loop 

    for (i = 0; i < 100; i++) {
        cout << "Digite a idade do funcionario " << i + 1 << ":\n";
        cin >> age;

        gender = 'a';
        while (gender != 'M' && gender != 'm' && gender != 'H' && gender != 'h') {
            cout << "Digite o genero[M/H] do funcionario \n";
            cin >> gender;
        }

        cout << "Digite a altura do funcionario \n";
        cin >> height;

        servant = 'a';
        do {
            cout << "Digite se o funcionario é concursado ou nao [S/N] \n";
            cin >> servant;
        } while (servant != 'S' && servant != 's' && servant != 'N' && servant != 'n');

        if (gender == 'M' || gender == 'm') {
            if (servant == 'S' || servant == 's') {
                femaleServants++;
            } else if (age > 30) {
                // quantidade de mulheres com mais de 30 anos sem concurso;
                femaleNotServantsOlderThanThirty++;
            }
        } else {
            maleWorkers++;
            if (servant == 'S' || servant == 's') {
                // a maior idade dos homens concursados;
                if (age > oldestMaleServant) {
                    oldestMaleServant = age;
                }
            }
            if (age < 40) {
                maleBelowFortyHeightTotal += height;
                maleBelowFortyQty++;
            }

        }
    }
    // a média das alturas dos homens com menos de 40 anos
    if (maleBelowFortyQty > 0) {
        maleBelowFortyHeightAverage =  maleBelowFortyHeightTotal / maleBelowFortyQty;
    }

    cout << "a) o número de funcionárias concursadas é: " << femaleServants << "\n";
    cout << "b) o número de funcionários (somente homens) é: " << maleWorkers << "\n";
    cout << "c) a maior idade dos homens concursados é: " << oldestMaleServant << "\n";
    cout << "d) a quantidade de mulheres com mais de 30 anos sem concurso é: " << femaleNotServantsOlderThanThirty << "\n";
    cout << "e) a média das alturas dos homens com menos de 40 anos é: " << maleBelowFortyHeightAverage << "\n";
}