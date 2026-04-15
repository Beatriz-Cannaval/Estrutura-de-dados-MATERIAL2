#include <iostream>
using namespace std;

int main() {
    string nomes[100];
    float notas[100];
    int i = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do estudante: ";
        cin >> nomes[i];

        cout << "Digite a nota final: ";
        cin >> notas[i];

        if (notas[i] >= 6) {
            cout << "Resultado: APROVADO\n";
        } else {
            cout << "Resultado: REPROVADO\n";
        }

        i++; // vai para o pr�ximo aluno

        cout << "\nDeseja cadastrar outro estudante? (s/n): ";
        cin >> continuar;
    }

    cout << "\n--- LISTA FINAL ---\n";

    for (int j = 0; j < i; j++) {
        cout << "Nome: " << nomes[j] << " | Nota: " << notas[j];

        if (notas[j] >= 6) {
            cout << " | APROVADO\n";
        } else {
            cout << " | REPROVADO\n";
        }
    }

    return 0;
}
