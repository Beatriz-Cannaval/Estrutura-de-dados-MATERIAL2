#include <iostream>
using namespace std;

int main() {
    string nome, sintoma;
    int idade;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Digite o nome do paciente: ";
        cin >> nome;

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite o sintoma: ";
        cin >> sintoma;

        cout << "\n--- Dados do paciente ---\n";
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Sintoma: " << sintoma << endl;

        cout << "\nDeseja cadastrar outro paciente? (s/n): ";
        cin >> continuar;
    }

    cout << "\nPrograma encerrado.\n";
    return 0;
}
