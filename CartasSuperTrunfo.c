#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_cidade[3];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int num_pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("# CADASTRANDO UMA CARTA DE SUPERTRUNFO\n\n");

    printf("1. Digite o código da cidade (Letra de \"a\" a \"h\" + um número de 1 a 4): ");
    scanf("%s", &codigo_cidade);
    printf("2. Digite nome: ");
    scanf(" %s", &nome);
    printf("3. Digite população: ");
    scanf("%d", &populacao);
    printf("4. Digite área: ");
    scanf("%f", &area);
    printf("5. Digite PIB: ");
    scanf("%f", &PIB);
    printf("6. Digite número de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n1. Código da cidade: %s \n", codigo_cidade);
    printf("2. Nome da cidade: %s \n", nome);
    printf("3. População da cidade: %d \n", populacao);
    printf("4. Área da cidade: %.2f \n", area);
    printf("5. PIB da cidade: %.2f \n", PIB);
    printf("6. Número de pontos turísticos da cidade: %d \n\n", num_pontos_turisticos);

    return 0;
}
