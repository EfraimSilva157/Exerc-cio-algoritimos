#include <iostream>
using namespace std;

int main() {
    string nome[5];
    float n1[5], n2[5], n3[5], media[5];

    
    for (int i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << endl;

        cout << "Nome: ";
        cin >> nome[i];

        cout << "Nota 1: ";
        cin >> n1[i];

        cout << "Nota 2: ";
        cin >> n2[i];

        cout << "Nota 3: ";
        cin >> n3[i];

        media[i] = (n1[i] + n2[i] + n3[i]) / 3;

        cout << endl;
    }

    
    int maior = 0;

    for (int i = 1; i < 5; i++) {
        if (media[i] > media[maior]) {
            maior = i;
        }
    }

    
    cout << "\nRESULTADOS:\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Nome: " << nome[i] << endl;
        cout << "Notas: " << n1[i] << ", " << n2[i] << ", " << n3[i] << endl;
        cout << "Media: " << media[i] << endl;

        if (media[i] >= 7) {
            cout << "Situacao: Aprovado" << endl;
        } else {
            cout << "Situacao: Reprovado" << endl;
        }

        cout << "---------------------\n";
    }

    
    cout << "\nMelhor aluno: " << nome[maior];
    cout << " com media " << media[maior] << endl;

    return 0;
}