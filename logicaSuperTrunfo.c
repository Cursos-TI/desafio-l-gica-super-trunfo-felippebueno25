#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[10] = "CE", cidade1[20] = "Fortaleza", cod1[10] = "A01";
    unsigned long int populacao1 = 2687000;
    int pontosturi1 = 50;
    float area1 = 313.4, pib1 = 73.4;

    char estado2[10] = "MG", cidade2[20] = "Belorizonte", cod2[10] = "B02";
    unsigned long int populacao2 = 2528000;
    int pontosturi2 = 75;
    float area2 = 320.1, pib2 = 98.3;

    int opção1, opção2, resultado1, resultado2;

    printf("~~~~~~~~~~~~[ SUPER  TRUNFO ]~~~~~~~~~~~~\n");
    // Entrada de Dados
    printf("> Jogador 1\n> Escolha sua CARTA: \n");
    printf("Código da carta: ");
    //scanf("%s", cod1);
    printf("Cidade: ");
    //scanf("%s", cidade1);
    printf("Estado (sigla): ");
    //scanf("%s", estado1);
    printf("População: ");
    //scanf("%d", &populacao1);
    printf("Área (km²): ");
    //scanf("%f", &area1);
    printf("PIB (bilhões): R$ ");
    //scanf("%f", &pib1);
    printf("Nº de pontos turísticos: \n");
    //scanf("%d", &pontosturi1);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("\n> Jogador 2\n> Escolha sua CARTA: \n");
    printf("Código da carta: ");
    // scanf("%s", cod2);
    printf("Nome da cidade: ");
    // scanf("%s", cidade2);
    printf("Estado (sigla): ");
    //scanf("%s", estado2);
    printf("População: ");
    //scanf("%d", &populacao2);
    printf("Área (km²): ");
    //scanf("%f", &area2);
    printf("PIB (bilhões): R$ ");
    //scanf("%f", &pib2);
    printf("Nº de pontos turísticos: \n");
    //scanf("%d", &pontosturi2);

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
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf(">>> Jogador 1:\n");
    printf("|> %s (%s)       Cód: %s\n" , cidade1, estado1, cod1);
    printf("|> População: %d habitantes\n|> Área:      %.2f Km²\n|> PIB:       R$%.2f bilhões de reais\n|> Pontos turísticos: %d\n|> Densidade Populacional: %.2f hab/km²\n|> PIB per Capita: R$%.2f\n", populacao1, area1, pib1, pontosturi1, densidadepop1, pibpercapita1);
    printf("\n>>> Jogador 2:\n");
    printf("|> %s (%s)   Cód: %s\n" , cidade2, estado2, cod2);
    printf("|> População: %d habitantes\n|> Área: %.2f Km²\n|> PIB: R$%.2f bilhões de reais\n|> Pontos turísticos: %d\n|> Densidade Populacional: %.2f hab/Km²\n|> PIB per Capita: R$%.2f\n", populacao2, area2, pib2, pontosturi2, densidadepop2, pibpercapita2);

    // Menu 1º atributo
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\nMENU - 1º Atributo\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf(">>> Escolha: ");
    scanf("%d", &opção1);
    
    // Menu 2º atributo
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("MENU - 2º Atributo\n");
    printf("Escolha outro atributo diferente do primeiro\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf(">>> Escolha: ");
    scanf("%d", &opção2);

    if (opção2 == opção1) {
        printf("Opção inválida! Deve selecionar um atributo diferente do 1º.\n");
    } else {
        // Resultado atributo 1
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        switch (opção1) {
            case 1:
                resultado1 = populacao1 > populacao2 ? 1 : 2;
                printf(">>> Atributo 1: [POPULAÇÃO]\n");
                printf("> Carta 1: %s(%s): %d", cidade1, estado1, populacao1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %d", cidade2, estado2, populacao2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 2:
                resultado1 = area1 > area2 ? 1 : 2;
                printf(">>> Atributo 1: [ÁREA]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, area1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, area2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 3:
                resultado1 = pib1 > pib2 ? 1 : 2;
                printf(">>> Atributo ': [PIB]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, pib1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, pib2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 4:
                resultado1 = pontosturi1 > pontosturi2 ? 1 : 2;
                printf(">>> Atributo 1: [PONTOS TURÍSTICOS]\n");
                printf("> Carta 1: %s(%s): %d", cidade1, estado1, pontosturi1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %d", cidade2, estado2, pontosturi2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 5:
                resultado1 = densidadepop1 < densidadepop2 ? 1 : 2; 
                printf(">>> Atributo 1: [DENSIDADE DEMOGRÁFICA]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, densidadepop1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, densidadepop2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 6:
                resultado1 = pibpercapita1 > pibpercapita2? 1 : 2;
                printf(">>> Atributo 1: [PIB per capita]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, pibpercapita1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, pibpercapita2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 7:
                resultado1 = superPoder1 > superPoder2 ? 1 : 2;
                printf(">>> Atributo 1: [Super Poder]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, superPoder1);
                printf(resultado1 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, superPoder2);
                printf(resultado1 == 2 ? "(Vencedor)\n" : "\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        // Resultado atributo 2
        printf("-----------------------------------------\n");
        switch (opção2) {
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 2;
                printf(">>> Atributo 2: [POPULAÇÃO]\n");
                printf("> Carta 1: %s(%s): %d", cidade1, estado1, populacao1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %d", cidade2, estado2, populacao2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 2:
                resultado2 = area1 > area2 ? 1 : 2;
                printf(">>> Atributo 2: [ÁREA]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, area1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, area2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 3:
                resultado2 = pib1 > pib2 ? 1 : 2;
                printf(">>> Atributo 2: [PIB]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, pib1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, pib2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 4:
                resultado2 = pontosturi1 > pontosturi2 ? 1 : 2;
                printf(">>> Atributo 2: [PONTOS TURÍSTICOS]\n");
                printf("> Carta 1: %s(%s): %d", cidade1, estado1, pontosturi1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %d", cidade2, estado2, pontosturi2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 5:
                resultado2 = densidadepop1 < densidadepop2 ? 1 : 2;
                printf(">>> Atributo 2: [DENSIDADE DEMOGRÁFICA]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, densidadepop1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, densidadepop2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 6:
                resultado2 = pibpercapita1 > pibpercapita2? 1 : 2;
                printf(">>> Atributo 2: [PIB per capita]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, pibpercapita1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, pibpercapita2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            case 7:
                resultado2 = superPoder1 > superPoder2 ? 1 : 2;
                printf(">>> Atributo 2: [Super Poder]\n");
                printf("> Carta 1: %s(%s): %.2f", cidade1, estado1, superPoder1);
                printf(resultado2 == 1 ? "(Vencedor)\n" : "\n");
                printf("> Carta 2: %s(%s): %.2f", cidade2, estado2, superPoder2);
                printf(resultado2 == 2 ? "(Vencedor)\n" : "\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    // Resultado final
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n>>> RESULTADO FINAL:\n");
    if (resultado1 == 1 && resultado2 == 1) {
        printf("> Jogador 1 VENCEU!\n");
    } else if (resultado1 == 2 && resultado2 == 2) {
        printf("> Jogador 2 VENCEU!\n");
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}
