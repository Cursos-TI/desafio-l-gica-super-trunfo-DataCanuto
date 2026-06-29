#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Incialização de variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[50], nome2[50];
    long populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    double densidade1, densidade2;
    double pibPerCapta1, pibPerCapta2;
    double superPoder1, superPoder2;
    int resultPopulacao, resultArea, resultPib, resultPontos, resultDensidade, resultPibPerCapita, resultSuperPoder;    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    //Entrada de dados Carta 1
    printf("Informe nome do estado 1: \n");
    scanf("%s", estado1);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome1);
    printf("Informe a população: \n");
    scanf("%ld", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%lf", &area1);
    printf("Informe o pib da cidade: \n");
    scanf("%lf", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos1);
    densidade1 = (double)populacao1 / area1;
    pibPerCapta1 = (pib1 * 1e9) / populacao1;
    superPoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 - densidade1 + pibPerCapta1);
    //Entrada de dados carta 2
    printf("Informe nome do estado 2: \n");
    scanf("%s", estado2);
    printf("Informe o código da cidade: \n");
    scanf("%s", codigo2);  
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Informe a população: \n");
    scanf("%ld", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%lf", &area2);
    printf("Informe o pib da cidade: \n");
    scanf("%lf", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos2);
    densidade2 = (double)populacao2 / area2;
    pibPerCapta2 = (pib2 * 1e9) / populacao2;
    superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 - densidade2 + pibPerCapta2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    //Atribuição de valores 1 ou 0 para o resultado da competição
    resultPopulacao = populacao1 > populacao2;
    resultArea = area1 > area2;
    resultPib = pib1 > pib2;
    resultPontos = pontosturisticos1 > pontosturisticos2;
    resultDensidade = densidade1 < densidade2;
    resultPibPerCapita = pibPerCapta1 > pibPerCapta2;
    resultSuperPoder = superPoder1 > superPoder2;

    printf("\n===Comparação entre cartas===\n\n");

    if(resultPopulacao == 1){
        printf("População: Carta 1 (%d)",resultPopulacao);
    }else{
        printf("População Carta 2 (%d)",resultPopulacao);
    }
    if(resultArea == 1){
        printf("Área: Carta 1 (%d)\n",resultArea);
    }else{
        printf("Área: Carta 2 (%d)\n",resultArea);
    }
    if(resultPib == 1){
        printf("Pib: Carta 1 (%d)\n",resultPib);
    }else{
        printf("Área: Carta 2 (%d)\n",resultPib);
    }
    if(resultPontos == 1){
        printf("Pontos turísticos: Carta 1 (%d)\n",resultPontos);
    }else{
        printf("Pontos Turísticos: Carta 2 (%d)\n",resultPontos);
    }
    if(resultDensidade == 1){
        printf("Densidade populacional: Carta 1 (%d)\n",resultDensidade);
    }else{
        printf("Densidade Populacional: Carta 2 (%d)\n",resultDensidade);
    }
    if(resultPibPerCapita == 1){
        printf("PIB per Capita: Carta 1 (%d)\n",resultPibPerCapita);
    }else{
        printf("PIB per Capita: Carta 2 (%d)\n",resultPibPerCapita);
    }
    if(resultSuperPoder == 1){
        printf("Super Poder: Carta 1 (%d)\nCarta 1 Venceu!\n%s Vencedora!",resultSuperPoder,nome1);
    }else{
        printf("Super Poder: Carta 2 (%d)\nCarta 2 Venceu!\n%s Vencedora!",resultSuperPoder,nome2);
    }
    
    printf("\nPressione ENTER para encerrar o programa...\n");

    
    return 0;

    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
}
