#include <stdio.h>

int main() {
    char pais1[50], pais2[50];                     // Nome do País
    unsigned int populacao1, populacao2;           // População
    float area1, area2;                            // Área em km²
    float pib1, pib2;                              // PIB do País
    unsigned short int pturisticos1, pturistico2; // Número de pontos turísticos

    float densidade1, densidade2;              // Densidade Populacional
    float pib_capita1, pib_capita2;                // PIB per Capita

    float superpoder1, superpoder2;                  // Super Poder da Carta

    unsigned short int atributo1, atributo2, validacao, resultado1, resultado2; 
    unsigned short int resultado_final; // Variavel para armazenar o resultado geral da carta vencedora


    float soma_att1=0, soma_att2=0; // soma atributos da carta 1 e carta 2

    // Código Para Solicitar as Informações da Primeira Carta (CARTA 1)
    printf("Informações para o preenchimento da CARTA 1:\n");
    printf("Nome do País (sem espaços): ");
    scanf("%s", pais1);

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%hu", &pturisticos1);

    // Código Para Solicitar as Informações da Segunda Carta (CARTA 2)
    printf("\nInformações para o preenchimento da CARTA 2:\n");
    printf("Nome do País (sem espaços): ");
    scanf("%s", pais2);

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%hu", & pturisticos2);

    // Calcular a densidade populacional
    densidade1 = (float) populacao1 / area1; 
    densidade2 = (float) populacao2 / area2; 
    
    // Calcular o PIB per capita
    pib_capita1 = (float) pib1 / populacao1; 
    pib_capita2 = (float) pib2 / populacao2; 

    // Calcular Super Poder das Cartas
    superpoder1 = (float) populacao1 + area1 + pib1 + pib_capita1 + (1 / densidade1) + pturisticos1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pib_capita2 + (1 / densidade2) + pturisticos2;

    // Menu Interativo para o jogador selecionar o PRIMEIRO atributo
    printf("\nSelecione o primeiro atributo que você gostaria de comparar entre as cartas.\n");
    printf("1. População \n2. Área \n3. PIB \n4. Número de pontos turísticos \n5. Densidade demográfica\n\n");
    scanf("%hu", &atributo1);

    // Remover a opção selecionada em 'atributo1'
    switch (atributo1) {
        case 1: // População
            // Cálculo para comparação do atributo População, e tratamento de empate
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            printf("Atributo 1 Comparado: População\n");
            printf("População 1: %u | População 2: %u\n", populacao1, populacao2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (populacao1 < populacao2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += populacao1;
            soma_att2 += populacao2;

            //  Código para solicitar o segundo atributo, excluindo-se a opção '1'
            printf("\nSelecione o segundo atributo:\n");
            printf("2. Área \n3. PIB \n4. Número de pontos turísticos \n5. Densidade demográfica\n\n");
            scanf("%hu", &atributo2);
            validacao = (atributo2 <= 1 || atributo2 > 5) ? 0 : 1;

            break;

        case 2: // Área
            // Cálculo para comparação do atributo Área, e tratamento de empate
            resultado1 = area1 > area2 ? 1 : 0;
            printf("Atributo 1 Comparado: Área\n");
            printf("Área 1: %.2f | Área 2: %.2f\n", area1, area2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (area1 < area2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += area1;
            soma_att2 += area2;

            //  Código para solicitar o segundo atributo, excluindo-se a opção '2'
            printf("\nSelecione o segundo atributo:\n");
            printf("1. População \n3. PIB \n4. Número de pontos turísticos \n5. Densidade demográfica\n\n");
            scanf("%hu", &atributo2);
            validacao = (atributo2 < 1 || atributo2 == 2 || atributo2 > 5) ? 0 : 1;
            break;

        case 3: // PIB
            // Cálculo para comparação do atributo PIB, e tratamento de empate
            resultado1 = pib1 > pib2 ? 1 : 0;
            printf("Atributo 1 Comparado: PIB\n");
            printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (pib1 < pib2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += pib1;
            soma_att2 += pib2;

            //  Código para solicitar o segundo atributo, excluindo-se a opção '3'
            printf("\nSelecione o segundo atributo:\n");
            printf("1. População \n2. Área \n4. Número de pontos turísticos \n5. Densidade demográfica\n\n");
            scanf("%hu", &atributo2);
            validacao = (atributo2 < 1 || atributo2 == 3 || atributo2 > 5) ? 0 : 1;
            break;

        case 4: // Pontos turísticos
            // Cálculo para comparação do atributo Pontos turísticos, e tratamento de empate
            resultado1 = pturisticos1 > pturisticos2 ? 1 : 0;
            printf("Atributo 1 Comparado: Pontos Turísticos\n");
            printf("Turísticos 1: %hu | Turísticos 2: %hu\n", pturisticos1, pturisticos2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (pturisticos1 < pturisticos2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += pturisticos1;
            soma_att2 += pturisticos2;

            //  Código para solicitar o segundo atributo, excluindo-se a opção '4'
            printf("\nSelecione o segundo atributo:\n");
            printf("1. População \n2. Área \n3. PIB \n5. Densidade demográfica\n\n");
            scanf("%hu", &atributo2);
            validacao = (atributo2 < 1 || atributo2 == 4 || atributo2 > 5) ? 0 : 1;
            break;

        case 5: // Densidade demográfica
            // Cálculo para comparação do atributo Densidade demográfica, e tratamento de empate
            resultado1 = densidade1 < densidade2 ? 1 : 0;            
            printf("Atributo 1 Comparado: Densidade Demográfica\n");
            printf("Densidade 1: %hu | Densidade 2: %hu\n", pturisticos1, pturisticos2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (densidade1 > densidade2 ){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += densidade1;
            soma_att2 += densidade2;

            //  Código para solicitar o segundo atributo, excluindo-se a opção '5'
            printf("\nSelecione o segundo atributo:\n");
            printf("1. População \n2. Área \n3. PIB \n4. Número de pontos turísticos\n\n");
            scanf("%hu", &atributo2);
            validacao = (atributo2 < 1 || atributo2 >= 5) ? 0 : 1;
            break;

        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Checagem de validação para a segunda de escolha de atributo, i.e., se o jogador selecionou uma opção valida.
    if (!validacao) {
        printf("Opção inválida.\n");
        return 0;
    }

    // Calculando os resultados com base no atributo 2
    switch (atributo2) {
        case 1:
            resultado2 = populacao1 > populacao2 ? 1 : 0;

            // Avaliando os resultados da comparação da escolha da segunda escolha de atributo.
            printf("Atributo 2 Comparado: População\n");
            printf("População 1: %u | População 2: %u\n", populacao1, populacao2);
            if (resultado1) printf("A carta 1 venceu neste atributo!!\n");

            else {if (populacao1 < populacao2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += populacao1;
            soma_att2 += populacao2;
            break;

        case 2:
            resultado2 = area1 > area2 ? 1 : 0;

            // Avaliando os resultados da comparação da escolha da segunda escolha de atributo.
            printf("Atributo 2 Comparado: Área\n");
            printf("Área 1: %.2f | Área 2: %.2f\n", area1, area2);
            if (resultado2) printf("A carta 1 venceu neste atributo!!\n");

            else {if (area1 < area2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += area1;
            soma_att2 += area2;
            break;

        case 3:
            resultado2 = pib1 > pib2 ? 1 : 0;

            // Avaliando os resultados da comparação da escolha da segunda escolha de atributo.
            printf("Atributo 2 Comparado: PIB\n");
            printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
            if (resultado2) printf("A carta 1 venceu neste atributo!!\n");

            else {if (pib1 < pib2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += pib1;
            soma_att2 += pib2;
            break;

        case 4:
            resultado2 = pturisticos1 > pturisticos2 ? 1 : 0;

            // Avaliando os resultados da comparação da escolha da segunda escolha de atributo.
            printf("Atributo 2 Comparado: Pontos Turísticos\n");
            printf("Turísticos 1: %hu | Turísticos 2: %hu\n", pturisticos1, pturisticos2);
            if (resultado2) printf("A carta 1 venceu neste atributo!!\n");

            else {if (pturisticos1 < pturisticos2){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += pturisticos1;
            soma_att2 += pturisticos2;
            break;

        case 5:
            resultado2 = densidade1 < densidade2 ? 1 : 0;

            // Avaliando os resultados da comparação da escolha da segunda escolha de atributo.
            printf("Atributo 2 Comparado: Densidade Demográfica\n");
            printf("Densidade 1: %hu | Densidade 2: %hu\n", pturisticos1, pturisticos2);
            if (resultado2) printf("A carta 1 venceu neste atributo!!\n");

            else {if (densidade1 > densidade2 ){
                printf("A carta 2 venceu neste atributo!!\n");}
                else {printf("Ambas as cartas Empataram neste atributo!\n");}}

            // Soma agregada para soma total de cada carta
            soma_att1 += densidade1;
            soma_att2 += densidade2;
            break;

        default:
            printf("Opção inválida.\n");
            return 0;
    }

    resultado_final = soma_att1 > soma_att2 ? 1 : 0; // Soma dos atributos, i.e., carta 1 > carta 2;

    // Mostrar as cartas e resultados
    printf("\nCarta 1: %s (%.2f pontos) | Carta 2: %s (%.2f pontos)\n", pais1, soma_att1, pais2, soma_att2);

    // Checagem: Vencedor ou Empate
    if (resultado_final){printf("A carta 1 venceu, com uma pontuação de %.2f \n", soma_att1);}
    else {if (soma_att1 < soma_att2){printf("A carta 2 venceu, com uma pontuação de %.2f \n", soma_att2);}
        else {printf("Ambas as cartas empataram com uma pontuação de %.2f \n", soma_att1);}
        }


    return 0;
}