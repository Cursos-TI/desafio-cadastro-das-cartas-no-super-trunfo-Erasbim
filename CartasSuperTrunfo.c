#include <stdio.h>

// Estrutura do Trunfo de Janequele

typedef struct {
    char estado;           // Letra do estado (A-H)
    char codigo[5];        // Código da carta (ex: A01, B03)
    char cidade[50];       // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos
} Carta;


int main() {
    // Carta de Pernambuco
    Carta pernambuco = {
        'E',               // Estado (Pernambuco é 'E')
        "E01",             // Código da carta
        "Recife",          // Nome da cidade
        1645727,           // População de Recife
        217,               // Área de Recife em km²
        170.6,             // PIB de Recife em bilhões de R$
        12                 // Pontos turísticos em Recife
    };
    gerarCodigoCarta(pernambuco.estado, 1, pernambuco.codigo); // Gerar código da carta E01

    // Carta da Paraíba
    Carta paraiba = {
        'F',               // Estado (Paraíba é 'F')
        "F01",             // Código da carta
        "João Pessoa",     // Nome da cidade
        817511,            // População de João Pessoa
        211,               // Área de João Pessoa em km²
        37.2,              // PIB de João Pessoa em bilhões de R$
        8                  // Pontos turísticos em João Pessoa
    };
    gerarCodigoCarta(paraiba.estado, 1, paraiba.codigo); // Gerar código da carta F01

    // Exibindo as cartas
    printf("Carta 1 - Pernambuco:\n");
    printf("Estado: %c\n", pernambuco.estado);
    printf("Código da Carta: %s\n", pernambuco.codigo);
    printf("Nome da Cidade: %s\n", pernambuco.cidade);
    printf("População: %d\n", pernambuco.populacao);
    printf("Área: %.2f km²\n", pernambuco.area);
    printf("PIB: %.2f bilhões de R$\n", pernambuco.pib);
    printf("Número de Pontos Turísticos: %d\n\n", pernambuco.pontos_turisticos);

    printf("Carta 2 - Paraíba:\n");
    printf("Estado: %c\n", paraiba.estado);
    printf("Código da Carta: %s\n", paraiba.codigo);
    printf("Nome da Cidade: %s\n", paraiba.cidade);
    printf("População: %d\n", paraiba.populacao);
    printf("Área: %.2f km²\n", paraiba.area);
    printf("PIB: %.2f bilhões de R$\n", paraiba.pib);
    printf("Número de Pontos Turísticos: %d\n", paraiba.pontos_turisticos);

    return 0;
}

