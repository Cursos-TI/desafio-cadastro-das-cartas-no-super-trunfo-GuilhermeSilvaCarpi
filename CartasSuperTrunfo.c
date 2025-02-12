#include <stdio.h>

int main() {
    // CADASTRANDO PRIMEIRA CARTA
    // Declarando variáveis:
    char codigo_cidade_A[3];
    char nome_A[50];
    int populacao_A;
    float area_A;
    float PIB_A;
    int num_pontos_turisticos_A;

    float densidade_populacional_A;
    float PIB_per_capita_A;

    float superpoder_A;

    // Cadastro das cartas:
    printf("# CADASTRANDO CARTAS DE SUPERTRUNFO\n");
    printf("\n# CADASTRANDO PRIMEIRA CARTA\n");
    printf("1. Digite o código da cidade (Letra de \"a\" a \"h\" + um número de 1 a 4): ");
    scanf("%s", &codigo_cidade_A);
    printf("2. Digite nome: ");
    scanf(" %s", &nome_A);
    printf("3. Digite população: ");
    scanf("%d", &populacao_A);
    printf("4. Digite área: ");
    scanf("%f", &area_A);
    printf("5. Digite PIB: ");
    scanf("%f", &PIB_A);
    printf("6. Digite número de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos_A);

    // Calculo de dados
    densidade_populacional_A = (float) populacao_A / area_A;
    PIB_per_capita_A = PIB_A /  (float) populacao_A;
    superpoder_A = populacao_A + area_A + PIB_A+ num_pontos_turisticos_A;

    // CADASTRANDO SEGUNDA CARTA
    // Declarando variáveis:
    char codigo_cidade_B[3];
    char nome_B[50];
    int populacao_B;
    float area_B;
    float PIB_B;
    int num_pontos_turisticos_B;

    float densidade_populacional_B;
    float PIB_per_capita_B;

    float superpoder_B;

    // Cadastro das cartas:
    printf("\n# CADASTRANDO SEGUNDA CARTA\n");
    printf("1. Digite o código da cidade (Letra de \"a\" a \"h\" + um número de 1 a 4): ");
    scanf("%s", &codigo_cidade_B);
    printf("2. Digite nome: ");
    scanf(" %s", &nome_B);
    printf("3. Digite população: ");
    scanf("%d", &populacao_B);
    printf("4. Digite área: ");
    scanf("%f", &area_B);
    printf("5. Digite PIB: ");
    scanf("%f", &PIB_B);
    printf("6. Digite número de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos_B);

    // Calculo de dados
    densidade_populacional_B = (float) populacao_B / area_B;
    PIB_per_capita_B = PIB_B /  (float) populacao_B;
    superpoder_B = populacao_B + area_B + PIB_B+ num_pontos_turisticos_B;
    
    // SAÍDAS DE DADOS
    /*
    // Exibição dos dados das cartas:
    printf("\n# EXIBINDO DADOS DAS CARTAS:\n");
    printf("1. Código da cidade: %s \n", codigo_cidade);
    printf("2. Nome da cidade: %s \n", nome);
    printf("3. População da cidade: %d \n", populacao);
    printf("4. Área da cidade: %.2f \n", area);
    printf("5. PIB da cidade: %.2f \n", PIB);
    printf("6. Número de pontos turísticos da cidade: %d \n", num_pontos_turisticos);
    printf("7. Densidade populacional: %.2f \n", densidade_popilacional);
    printf("8. PIB per capita: %.2f \n", PIB_per_capita);
    printf("9. Super poder: %.4f \n\n", superpoder);
    */
    // Comparação de cartas
    // A saída vai ser 1 se a primeira carta ganhar um parâmetro e 0 se a segunda ganhar
    printf("\n# EXIBINDO COMPARAÇÃO DAS CARTAS:\n");
    printf("O resultado vai ser 1 para primeira carta e 0 para segunda\n");
    printf("- População da cidade: %d \n", populacao_A > populacao_B);
    printf("- Área da cidade: %d \n", area_A > area_B);
    printf("- PIB da cidade: %d \n", PIB_A > PIB_B);
    printf("- Número de pontos turísticos da cidade: %d \n", num_pontos_turisticos_A > num_pontos_turisticos_B);
    printf("- Densidade populacional: %d \n", densidade_populacional_A < densidade_populacional_B);
    printf("- PIB per capita: %d \n", PIB_per_capita_A > PIB_per_capita_B);
    printf("- Super poder: %d \n\n", superpoder_A > superpoder_B);

    // Finalizando programa
    return 0;
}
