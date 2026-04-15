#include <iostream>
using namespace std;

// Criando a enum
enum Cores {
    VERMELHO,
    VERDE,
    AZUL
};

// Criando o typedef
typedef enum Cores TipoCor;

int main() {
    TipoCor cor;
    int opcao;

    cout << "Escolha uma cor:\n";
    cout << "0 - Vermelho\n";
    cout << "1 - Verde\n";
    cout << "2 - Azul\n";
    cin >> opcao;

    cor = (TipoCor) opcao;

    cout << "\nCor escolhida: ";

    if (cor == VERMELHO) {
        cout << "Vermelho\n";
    } else if (cor == VERDE) {
        cout << "Verde\n";
    } else if (cor == AZUL) {
        cout << "Azul\n";
    } else {
        cout << "Opcao invalida\n";
    }

    return 0;
}
