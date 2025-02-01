#include <stdio.h>

int main() {
    // Declarando variáveis:
    char codigo_cidade[3];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int num_pontos_turisticos;

    float densidade_popilacional;
    float PIB_per_capita;

    // Cadastro das cartas:
    printf("# CADASTRANDO UMA CARTA DE SUPERTRUNFO\n");
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

    // Calculo de dados
    densidade_popilacional = (float) populacao / area;
    PIB_per_capita = PIB /  (float) populacao;
    
    // Exibição dos dados das cartas:
    printf("\n# EXIBINDO DADOS DAS CARTAS:\n");
    printf("1. Código da cidade: %s \n", codigo_cidade);
    printf("2. Nome da cidade: %s \n", nome);
    printf("3. População da cidade: %d \n", populacao);
    printf("4. Área da cidade: %.2f \n", area);
    printf("5. PIB da cidade: %.2f \n", PIB);
    printf("6. Número de pontos turísticos da cidade: %d \n", num_pontos_turisticos);
    printf("7. Densidade populacional: %.2f \n", densidade_popilacional);
    printf("8. PIB per capita: %.2f \n\n", PIB_per_capita);

    // Finalizando programa
    return 0;
}
