#include <iostream>
using namespace std;

int main() {
    float enredo, atuacao, efeitos, media;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Avalie o ENREDO (0 a 10): ";
        cin >> enredo;

        cout << "Avalie a ATUACAO (0 a 10): ";
        cin >> atuacao;

        cout << "Avalie os EFEITOS ESPECIAIS (0 a 10): ";
        cin >> efeitos;

        media = (enredo + atuacao + efeitos) / 3;

        cout << "\nMedia do filme: " << media << endl;

        cout << "\nDeseja avaliar outro filme? (s/n): ";
        cin >> continuar;
    }

    cout << "\nPrograma encerrado.\n";
    return 0;
}
