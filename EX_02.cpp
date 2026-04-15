#include <iostream>
using namespace std;

int main() {
    string titulo, autor;
    int ano;

    while (true) {
        cout << "Digite o t�tulo do livro (ou 'fim' para encerrar): ";
        cin >> titulo;

        if (titulo == "fim") {
            break;
        }

        cout << "Digite o autor: ";
        cin >> autor;

        cout << "Digite o ano de publica��o: ";
        cin >> ano;

        cout << "\n--- Dados do livro ---\n";
        cout << "T�tulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Ano: " << ano << endl << endl;
    }

    cout << "Cadastro encerrado.\n";
    return 0;
}
