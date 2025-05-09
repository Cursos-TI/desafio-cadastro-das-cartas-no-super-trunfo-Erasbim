#include <iostream>
#include <string>
using namespace std;

const int TAM = 8;

// Tabuleiro com notação simplificada das peças
char tabuleiro[TAM][TAM] = {
    {'r','n','b','q','k','b','n','r'}, // Pretas
    {'p','p','p','p','p','p','p','p'},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {'P','P','P','P','P','P','P','P'}, // Brancas
    {'R','N','B','Q','K','B','N','R'}
};

// Mostra o tabuleiro
void mostrarTabuleiro() {
    cout << "  a b c d e f g h\n";
    for (int i = 0; i < TAM; i++) {
        cout << 8 - i << " ";
        for (int j = 0; j < TAM; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << 8 - i << endl;
    }
    cout << "  a b c d e f g h\n";
}

// Converte coordenadas tipo "e2" para índices de matriz
bool converterCoordenada(string entrada, int &linha, int &coluna) {
    if (entrada.length() != 2) return false;
    coluna = entrada[0] - 'a';
    linha = 8 - (entrada[1] - '0');
    return linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM;
}

// Move a peça sem validar regras
void moverPeca(string origem, string destino) {
    int linOrigem, colOrigem, linDestino, colDestino;
    if (!converterCoordenada(origem, linOrigem, colOrigem) ||
        !converterCoordenada(destino, linDestino, colDestino)) {
        cout << "Entrada inválida. Use o formato e2 e4.\n";
        return;
    }

    char peca = tabuleiro[linOrigem][colOrigem];
    if (peca == ' ') {
        cout << "Não há peça na posição de origem.\n";
        return;
    }

    tabuleiro[linOrigem][colOrigem] = ' ';
    tabuleiro[linDestino][colDestino] = peca;
}

int main() {
    string origem, destino;
    cout << "==== JOGO DE XADREZ SIMPLES ====\n";
    cout << "Use formato como: e2 e4 para mover peças.\n";

    while (true) {
        mostrarTabuleiro();
        cout << "Mover peça (ex: e2 e4, ou 'sair'): ";
        cin >> origem;
        if (origem == "sair") break;
        cin >> destino;
        moverPeca(origem, destino);
    }

    cout << "Jogo encerrado.\n";
    return 0;
}