#include <iostream>
#include <iomanip>
using namespace std;


float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    string nomes[5];
    float notas[5][3];
    float medias[5];

    
    for (int i = 0; i < 5; i++) {
        cout << "\nAluno " << i + 1 << endl;

        cout << "Nome: ";
        cin >> nomes[i];

        for (int j = 0; j < 3; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }

        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);
    }

    
    int maior = 0;
    for (int i = 1; i < 5; i++) {
        if (medias[i] > medias[maior]) {
            maior = i;
        }
    }

    
    cout << "\n\n===== TABELA =====\n\n";

    cout << left
         << setw(15) << "Nome"
         << setw(10) << "N1"
         << setw(10) << "N2"
         << setw(10) << "N3"
         << setw(10) << "Media"
         << setw(15) << "Situacao"
         << endl;

    cout << "-------------------------------------------------------------\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < 5; i++) {
        string situacao;

        if (medias[i] >= 7)
            situacao = "Aprovado";
        else
            situacao = "Reprovado";

        cout << left
             << setw(15) << nomes[i]
             << setw(10) << notas[i][0]
             << setw(10) << notas[i][1]
             << setw(10) << notas[i][2]
             << setw(10) << medias[i]
             << setw(15) << situacao
             << endl;
    }

    
    cout << "\nMelhor aluno: " << nomes[maior]
         << " (Media: " << medias[maior] << ")" << endl;

    return 0;
}
