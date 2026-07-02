#include <stdio.h>
#include <string.h>

int main(){
    //Incialização de variáveis
    char estado1[50], estado2[50];
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
    int result1=0, result2=0;
    

    int op1=0, op2 = 0;


    printf("===Super Trunfo===\n\n");
    printf("1. Cadastrar carta 1\n");
    printf("2. Cadastrar carta 2\n");
    printf("3. Utilizar dados do sistema\n");
    printf("4. Exibir dados da carta 1\n");
    printf("5. Exibir dados da carta 2\n");
    printf("6. Exibir dados das duas cartas\n");
    printf("7. Comparar cartas\n");
    printf("8. Jogar!\n");
    printf("0. Sair\n\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &mainOp);
    printf("\n");

    switch(mainOp){
        case 1:{
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
            printf("Carta cadastrada com sucesso! ");
            printf("%s%s %s\n",estado1,codigo1,nome1);
            break;
        }
        case 2:{
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
            printf("Carta cadastrada com sucesso! ");
            printf("%s%s %s\n",estado2,codigo2,nome2);
            break;
        }
        case 3:{
            //Atribuir valores
            strcpy(estado1, "A");
            strcpy(estado2, "B");
            strcpy(codigo1, "01");
            strcpy(codigo2, "02");
            strcpy(nome1, "São Paulo");
            strcpy(nome2, "Rio de Janeiro");
            populacao1 = 11451245;
            populacao2 = 6211423;
            area1 = 1521.1;
            area2 = 1200.3;
            pib1 = 828.9;
            pib2 = 359.6;
            pontosturisticos1 = 55;
            pontosturisticos2 = 60;
            densidade1 = (double)populacao1 / area1;
            pibPerCapta1 = (pib1 * 1e9) / populacao1;
            superPoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 - densidade1 + pibPerCapta1);
            densidade2 = (double)populacao2 / area2;
            pibPerCapta2 = (pib2 * 1e9) / populacao2;
            superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 - densidade2 + pibPerCapta2);
            break;
        }
        case 4:{
            //Saida de dados carta 1
            printf("\n\n===Carta 1===\n");
            printf("Estado: %s\n",estado1);
            printf("Código: %s%s\n",estado1, codigo1);
            printf("Nome da cidade: %s\n",nome1);
            printf("População: %ld\n", populacao1);
            printf("Área: %.2lf Km²\n",area1);
            printf("PIB: %.2lf bilhões de reais\n ",pib1);
            printf("Número de pontos turísticos: %d\n",pontosturisticos1);
            printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
            printf("PIB per Capita: %.2lf reais\n",pibPerCapta1);
            printf("Super Poder: %.2lf\n",superPoder1);
            break;  
        }
        case 5:{
            //Saida de dados carta 2
            printf("\n\n===Carta 2===\n");
            printf("Estado: %s\n",estado2);
            printf("Código: %s%s\n",estado2, codigo2);
            printf("Nome da cidade: %s\n",nome2);
            printf("População: %ld\n", populacao2);
            printf("Área: %.2lf Km²\n",area2);
            printf("PIB: %.2lf bilhões de reais\n",pib2);
            printf("Número de pontos turísticos: %d\n",pontosturisticos2);
            printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
            printf("PIB per Capita: %.2lf reais\n",pibPerCapta2);
            printf("Super Poder: %.2lf\n",superPoder2);
            break;
        }
        case 6:{
            printf("\n\n=====Cartas Cadastradas=====\n");
            printf("\n===Carta 1===\n");
            printf("Estado: %s\n",estado1);
            printf("Código: %s%s\n",estado1, codigo1);
            printf("Nome da cidade: %s\n",nome1);
            printf("População: %ld\n", populacao1);
            printf("Área: %.2lf Km²\n",area1);
            printf("PIB: %.2lf bilhões de reais\n ",pib1);
            printf("Número de pontos turísticos: %d\n",pontosturisticos1);
            printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
            printf("PIB per Capita: %.2lf reais\n",pibPerCapta1);
            printf("Super Poder: %.2lf\n",superPoder1);

            printf("\n\n===Carta 2===\n");
            printf("Estado: %s\n",estado2);
            printf("Código: %s%s\n",estado2, codigo2);
            printf("Nome da cidade: %s\n",nome2);
            printf("População: %ld\n", populacao2);
            printf("Área: %.2lf Km²\n",area2);
            printf("PIB: %.2lf bilhões de reais\n",pib2);
            printf("Número de pontos turísticos: %d\n",pontosturisticos2);
            printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
            printf("PIB per Capita: %.2lf reais\n",pibPerCapta2);
            printf("Super Poder: %.2lf\n",superPoder2);
            break;
        }
        case 7:{
            //Comparação entre todos atributos
            //Atribuição de valores 1 ou 0 para o resultado da competição
            
            resultPopulacao = populacao1 > populacao2;
            resultArea = area1 > area2;
            resultPib = pib1 > pib2;
            resultPontos = pontosturisticos1 > pontosturisticos2;
            resultDensidade = densidade1 < densidade2;
            resultPibPerCapita = pibPerCapta1 > pibPerCapta2;
            resultSuperPoder = superPoder1 > superPoder2;                
            printf("\n===Comparação entre cartas===\n\n");
            //case 1
            if(populacao1 > populacao2){
                printf("População: Carta 1 (%d)\n",resultPopulacao);
            }else if(populacao1 < populacao2){
                printf("População: Carta 2 (%d)\n",resultPopulacao);
            }else{
                printf("Empate!(-1)\n");
            }
            //case 2
            if(area1 > area2){
                printf("Área: Carta 1 (%d)\n",resultArea);
            }else if(area1 < area2){
                printf("Área: Carta 2 (%d)\n",resultArea);
            }else{
                printf("Empate!(-1)\n");
            }

            if(pib1 > pib2){
                printf("Pib: Carta 1 (%d)\n",resultPib);
            }else if(pib1 < pib2){
                printf("Área: Carta 2 (%d)\n",resultPib);
            }else{
                printf("Empate!(-1)\n");
            }

            if(pontosturisticos1 > pontosturisticos2){
                printf("Pontos turísticos: Carta 1 (%d)\n",resultPontos);
            }else if (pontosturisticos1 < pontosturisticos2){
                printf("Pontos Turísticos: Carta 2 (%d)\n",resultPontos);
            }else{
                printf("Empate!(-1)\n");
            }

            if(densidade1 < densidade2){
                printf("Densidade populacional: Carta 1 (%d)\n",resultDensidade);
            }else if(densidade1 > densidade2){
                printf("Densidade Populacional: Carta 2 (%d)\n",resultDensidade);
            }else{
                printf("Empate!(-1)\n");
            }

            if(pibPerCapta1 > pibPerCapta2){
                printf("PIB per Capita: Carta 1 (%d)\n",resultPibPerCapita);
            }else if(pibPerCapta1 < pibPerCapta2){
                printf("PIB per Capita: Carta 2 (%d)\n",resultPibPerCapita);
            }else{
                printf("Empate!(-1)\n");
            }

            if(superPoder1 > superPoder2){
                printf("Super Poder: Carta 1 (%d)\n",resultSuperPoder);
            }else if(superPoder1 < superPoder2){
                printf("Super Poder: Carta 2 (%d)\n",resultSuperPoder);
            }else{
                printf("Empate!(-1)\n");
            }
            break;
        }
        case 8:{                
            printf("\nSelecione qual atributo voce deseja comparar na primeira rodada: \n");
            printf("\n[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade\n[6] - PIB Per Capita\n[7] - Super Poder\n");
            printf("Digite 0 para sair do programa: \n");
            printf("OpçãO: ");
            scanf("%d", &op1);

            switch(op1){
                case 1:{
                    if(populacao1 == populacao2){
                        result1 = -1;                                
                    }else{
                        result1 = populacao1 > populacao2 ? 1 : 0;
                    }
                    break;
                }
                case 2:{
                    if(area1 == area2){
                        result1 = -1;
                    }else{
                        result1 = area1 > area2 ? 1 : 0;
                    }
                    break;
                }
                case 3:{
                    if(pib1 == pib2){
                        result1 = -1;
                    }else{
                        result1 = pib1 > pib2? 1 : 0;
                    }
                    break;
                }
                case 4:{
                    if(pontosturisticos1 == pontosturisticos2){
                        result1 = -1;
                    }else{
                        result1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                    }
                    break;
                }
                case 5:{
                    if(densidade1 == densidade2){
                        result1 = -1;
                    }else{
                        result1 = densidade1 < densidade2? 1 : 0;
                    }
                    break;
                }
                case 6:{
                    if(pibPerCapta1 == pibPerCapta2){
                        result1 = -1;
                    }else{
                        result1 = pibPerCapta1 > pibPerCapta2 ? 1 : 0;
                    }
                    break;
                }
                case 7:{
                    if(superPoder1 == superPoder2){
                        result1 = -1;
                    }else{
                        result1 = superPoder1 > superPoder2 ? 1 : 0;
                    }
                    break;
                }
                default:{
                    printf("Opção inválida!\n");
                    break;
                }
            }

            printf("\nSelecione qual atributo voce deseja comparar na segunda rodada: \n");
            printf("\n[1] - População\n[2] - Área\n[3] - PIB\n[4] - Pontos Turísticos\n[5] - Densidade\n[6] - PIB Per Capita\n[7] - Super Poder\n");
            printf("Digite 0 para sair do programa: \n");
            printf("OpçãO: ");
            scanf("%d", &op2);

            switch(op2){
                case 1:{
                    if(populacao1 == populacao2){
                        result2 = -1;                                
                    }else{
                        result2 = populacao1 > populacao2 ? 1 : 0;
                    }
                    break;
                }
                case 2:{
                    if(area1 == area2){
                        result2 = -1;
                    }else{
                        result2 = area1 > area2 ? 1 :0;
                    }
                    break;
                }
                case 3:{
                    if(pib1 == pib2){
                        result2 = -1;
                    }else{
                        result2 = pib1 > pib2? 1 : 0;
                    }
                    break;
                }
                case 4:{
                    if(pontosturisticos1 == pontosturisticos2){
                        result2 = -1;
                    }else{
                        result2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                    }
                    break;
                }
                case 5:{
                    if(densidade1 == densidade2){
                        result2 = -1;
                    }else{
                        result2 = densidade1 < densidade2? 1 : 0;
                    }
                    break;
                }
                case 6:{
                    if(pibPerCapta1 == pibPerCapta2){
                        result2 = -1;
                    }else{
                        result2 = pibPerCapta1 > pibPerCapta2 ? 1 : 0;
                    }
                    break;
                }
                case 7:{
                    if(superPoder1 == superPoder2){
                        result2 = -1;
                    }else{
                        result2 = superPoder1 > superPoder2 ? 1 : 0;
                    }
                    break;
                }
                default:{
                    printf("Opção inválida!\n");
                    break;
                }
            }

            printf("\n***Reulstado da Primeira Rodada: %d",result1);
            printf("\n***Resultado da Segunda Rodada: %d", result2);

            if(result1 == 1 && result2 == 1){
                printf("\n=== Parabéns! Carta 1 Venceu o Jogo! ===\n");
            }else if(result1 == 0 && result2 == 0){
                printf("\n=== Parabéns! Carta 2 Venceu o Jogo! ===\n");
            }else{
                printf("\n=== Temos um EMPATE! ===\n");
            }
            break;
        }
        default:{
            printf("Opção incorreta");
            break;
        }
        
    }


    printf("Saindo do programa...");


    return 0;
}
