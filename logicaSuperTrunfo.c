#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[20], cidade1[20], cod1[10];
    unsigned long int populacao1;
    int pontosturi1;
    float area1, pib1;

    char estado2[20], cidade2[20], cod2[10];
    unsigned long int populacao2;
    int pontosturi2;
    float area2, pib2;

    printf("~~~~~~~~~~~~ SUPER TRUNFO CIDADES ~~~~~~~~~~~~\n");
    // Entrada de Dados
    printf("> Jogador 1\n> Escolha sua CARTA: \n");
    printf("Código da carta: ");
    scanf("%s", cod1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): R$ ");
    scanf("%f", &pib1);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosturi1);

    printf("\n> Jogador 2\n> Escolha sua CARTA: \n");
    printf("Código da carta: ");
    scanf("%s", cod2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): R$ ");
    scanf("%f", &pib2);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosturi2);

    // Cálculo das densidades populacionais
    float densidadepop1 = (float) populacao1 / area1;
    float densidadepop2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita
    // Fiquei confuso sobre como deveria entrar os dados do PIB para fazer o cálculo e tive de coverter pro número cheio pra realizar o cálculo do per capita
    float pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

    // Cálculo dos Super Poderes
    float superPoder1 = ((float) populacao1 + area1 + pib1 + pontosturi1 + pibpercapita1 + (1/densidadepop1));
    float superPoder2 = ((float) populacao2 + area2 + pib2 + pontosturi2 + pibpercapita2 + (1/densidadepop2));

    // Apresentaçao das cartas
    printf("\n\n>>> Jogador 1:\n");
    printf("|> %s (%s)       Cód: %s\n" , cidade1, estado1, cod1);
    printf("|> População: %d habitantes\n|> Área: %.2f Km²\n|> PIB: %.2f bilhões de reais\n|> Pontos turísticos: %d\n|> Densidade Populacional %.2f hab/Km²\n|> PIB per Capita: R$ %.2f\n", populacao1, area1, pib1, pontosturi1, densidadepop1, pibpercapita1);
    printf("\n>>> Jogador 2:\n");
    printf("| %s (%s)   Cód: %s\n" , cidade2, estado2, cod2);
    printf("> População: %d habitantes\n> Área: %.2f Km²\n> PIB: %.2f bilhões de reais\n> Pontos turísticos: %d\n> Densidade Populacional %.2f hab/Km²\n> PIB per Capita: R$ %.2f\n", populacao2, area2, pib2, pontosturi2, densidadepop2, pibpercapita2);

    // Menu
    int opção;
    printf("\n>>> MENU\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("\n>>> Escolha um atributor e veremos quem vencerá: ");
    scanf("%d", &opção);
    
    // Resultado
    printf("\n");
    switch (opção) {
        case 1:
            printf("> Atributo: [POPULAÇÃO]\n");
            printf("> Carta 1: %s(%s): %d\n", cidade1, estado1, populacao1);
            printf("> Carta 2: %s(%s): %d\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (populacao1 < populacao2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 2:
            printf("> Atributo: [ÁREA]\n");
            printf("> Carta 1: %s(%s): %.2f\n", cidade1, estado1, area1);
            printf("> Carta 2: %s(%s): %.2f\n", cidade2, estado2, area2);
            if (area1 > area2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (area1 < area2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 3:
            printf("> Atributo: [PIB]\n");
            printf("> Carta 1: %s(%s): %.2f\n", cidade1, estado1, pib1);
            printf("> Carta 2: %s(%s): %.2f\n", cidade2, estado2, pib2);
            if (area1 > area2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (area1 < area2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 4:
            printf("> Atributo: [PONTOS TURÍSTICOS]\n");
            printf("> Carta 1: %s(%s): %d\n", cidade1, estado1, pontosturi1);
            printf("> Carta 2: %s(%s): %d\n", cidade2, estado2, pontosturi2);
            if (pontosturi1 > pontosturi2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (pontosturi1 < pontosturi2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 5:
            printf("> Atributo: [DENSIDADE DEMOGRÁFICA]\n");
            printf("> Carta 1: %s(%s): %.2f\n", cidade1, estado1, densidadepop1);
            printf("> Carta 2: %s(%s): %.2f\n", cidade2, estado2, densidadepop2);
            if (densidadepop1 < densidadepop2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (densidadepop1 > densidadepop2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 6:
            printf("> Atributo: [PIB per capita]\n");
            printf("> Carta 1: %s(%s): %.2f\n", cidade1, estado1, pibpercapita1);
            printf("> Carta 2: %s(%s): %.2f\n", cidade2, estado2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (pibpercapita1 < pibpercapita2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        case 7:
            printf("> Atributo: [Super Poder]\n");
            printf("> Carta 1: %s(%s): %.2f\n", cidade1, estado1, superPoder1);
            printf("> Carta 2: %s(%s): %.2f\n", cidade2, estado2, superPoder2);
            if (superPoder1 > superPoder2){
            printf("[Resultado]: Carta 1 (%s) venceu!\n\n", cidade1);
            } else if (superPoder1 < superPoder2) {
            printf("[Resultado]: Carta 2 (%s) venceu!\n\n", cidade2);
            } else {
            printf("Empate!");
            }
            break;
        default:
            break;
    }
    return 0;
}
