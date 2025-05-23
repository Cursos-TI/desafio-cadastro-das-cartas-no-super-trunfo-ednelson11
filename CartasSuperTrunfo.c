#include <stdio.h>

int main() {
    char tema[100] = "Desafio Super Trunfo - Países";
    char tema2[100] = "Cadastro de informações da cidade";
    char tema3[50] = "Dados";

    char estado[100];
    char codigo_da_carta[100];
    char cidade[100];

    float numero_de_habitantes;
    float pib;
    int numeros_de_pontos_turisticos;
    float area_em_km2;
    float densidade_populacional;
    float pib_percapita;
    float densidade_populacional_e_pib_percapita;
    float super_poder; 



    printf("\n%s\n", tema);
    printf("\n%s\n", tema2);
    printf("\n%s\n", tema3);


    printf("\nInforme os dados da carta 1\n");

    printf("Código da carta (Letra + Número. Ex.: A01): ");
    scanf(" %[^\n]s", codigo_da_carta);

    printf("Estado: ");  
    scanf(" %[^\n]s", estado);

    printf("Cidade: ");
    scanf(" %[^\n]s", cidade);

    printf("Número de habitantes: ");
    scanf("%f", &numero_de_habitantes);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("N° de pontos turísticos: ");
    scanf("%d", &numeros_de_pontos_turisticos); 

    printf("Área em Km²: ");
    scanf("%f", &area_em_km2);

    
    densidade_populacional = (area_em_km2 > 0) * (numero_de_habitantes / area_em_km2);
    pib_percapita = (numero_de_habitantes > 0) * (pib / numero_de_habitantes);
    densidade_populacional_e_pib_percapita = densidade_populacional + pib_percapita;

    
    super_poder = numero_de_habitantes + pib + numeros_de_pontos_turisticos + area_em_km2 + densidade_populacional + pib_percapita + densidade_populacional_e_pib_percapita;


    printf("\nResumo da cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Número de habitantes: %.0f\n", numero_de_habitantes);
    printf("Área em Km²: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("Pib percapita: %.2f Reais\n", pib_percapita);
    printf("Densidade populacional e pib percapita: %.2f \n", densidade_populacional_e_pib_percapita);

    printf("Super Poder da carta: %.2f\n", super_poder); 

    


    
 


 


 


 


 


 

  // 02
 


 


 

    char estado_2[100];
    char codigo_da_carta_2[100];
    char cidade_2[100];
    int numero_de_habitantes_2;
    float area_em_km2_2;
    float pib_2;
    int numeros_de_pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_percapita_2;
    float densidade_populacional_e_pib_percapita2;
    float super_poder_2;


 

    printf("\nInforme os dados da carta 2:\n");

    printf("Código da carta (Letra + Número. Ex.: A02): ");
    scanf(" %[^\n]s", codigo_da_carta_2);
    printf("Estado: ");
    scanf(" %[^\n]s", estado_2);
    printf("Cidade: ");
    scanf(" %[^\n]s", cidade_2);
    printf("Número de habitantes: ");
    scanf("%d", &numero_de_habitantes_2);
    printf("Área em Km²: ");
    scanf("%f", &area_em_km2_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("N° de pontos turísticos: ");
    scanf("%d", &numeros_de_pontos_turisticos_2);
    
    densidade_populacional = (area_em_km2 > 0) * (numero_de_habitantes / area_em_km2);
    
    pib_percapita = (numero_de_habitantes > 0) * (pib / numero_de_habitantes);

    densidade_populacional_e_pib_percapita2 = (densidade_populacional_2) + (pib_percapita_2);

    super_poder_2 = numero_de_habitantes_2 + area_em_km2_2 + pib_2 + numeros_de_pontos_turisticos_2 + densidade_populacional_2 + pib_percapita_2 + densidade_populacional_e_pib_percapita2;


 


 

    printf("\n CARTA %s \n\n", codigo_da_carta_2);
    printf("\n Resumo da cidade 02:\n");
    printf("\nEstado: %s \n", estado_2);
    printf("Cidade: %s \n", cidade_2);
    printf("Número de habitantes: %.3d\n", numero_de_habitantes_2);
    printf("Área: %.2f km²\n", area_em_km2_2);
    printf("PIB: R$ %.2f\n", pib_2);
    printf("Número de pontos turísticos: %d\n", numeros_de_pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("Pib percapita: %.2f Reais\n", pib_percapita_2);
    printf("Densidade populacional e pib percapita2: %.2f \n", densidade_populacional_e_pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder_2);




    printf("\nComparação de Cartas:\n\n");

    float vitorias_carta1;
    float vitorias_carta2;

    printf("População: Carta %d venceu (%d)\n", (numero_de_habitantes > numero_de_habitantes_2) + 1, (numero_de_habitantes > numero_de_habitantes_2));
    printf("Área: Carta %d venceu (%d)\n", (area_em_km2 > area_em_km2_2) + 1, (area_em_km2 > area_em_km2_2));
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib_2) + 1, (pib > pib_2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (numeros_de_pontos_turisticos > numeros_de_pontos_turisticos_2) + 1, (numeros_de_pontos_turisticos > numeros_de_pontos_turisticos_2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional > densidade_populacional_2) + 1, (densidade_populacional > densidade_populacional_2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_percapita > pib_percapita_2) + 1, (pib_percapita > pib_percapita_2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder > super_poder_2) + 1, (super_poder > super_poder_2));


    
    

    printf("\n COMPARAÇÃO DE CARTA 1 E CARTA2 \n\n");
    

    printf("Qual a maior densidade populacional entre os dois estado? \n");

     printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
     printf("Densidade populacional 2: %.2f hab/km²\n", densidade_populacional_2);
    
    
    if (densidade_populacional > densidade_populacional_2) {
      printf("O estado da Carta 1 tem a maior Densidade populacional \n");
    }
    else {
      printf(" O estado da Carta 2 tem a Densidade populacional menor que a da Carta 1 \n");
    }



   
    int opcao;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Número de habitantes\n");
    printf("2. Área em Km²\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional (MENOR vence)\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite a opção (1-7): ");
    scanf("%d", &opcao);

    printf("\nComparação escolhida:\n");

    switch (opcao) {
        case 1:
            if (numero_de_habitantes > numero_de_habitantes_2) {
                printf("Carta 1 venceu em Número de habitantes!\n");
            } else if (numero_de_habitantes_2 > numero_de_habitantes) {
                printf("Carta 2 venceu em Número de habitantes!\n");
            } else {
                printf("Empate em Número de habitantes!\n");
            }
            break;
        case 2:
            if (area_em_km2 > area_em_km2_2) {
                printf("Carta 1 venceu em Área!\n");
            } else if (area_em_km2_2 > area_em_km2) {
                printf("Carta 2 venceu em Área!\n");
            } else {
                printf("Empate em Área!\n");
            }
            break;
        case 3:
            if (pib > pib_2) {
                printf("Carta 1 venceu em PIB!\n");
            } else if (pib_2 > pib) {
                printf("Carta 2 venceu em PIB!\n");
            } else {
                printf("Empate em PIB!\n");
            }
            break;
        case 4:
            if (numeros_de_pontos_turisticos > numeros_de_pontos_turisticos_2) {
                printf("Carta 1 venceu em Pontos turísticos!\n");
            } else if (numeros_de_pontos_turisticos_2 > numeros_de_pontos_turisticos) {
                printf("Carta 2 venceu em Pontos turísticos!\n");
            } else {
                printf("Empate em Pontos turísticos!\n");
            }
            break;
        case 5:
            if (densidade_populacional < densidade_populacional_2) {
                printf("Carta 1 venceu em Densidade populacional (MENOR vence)!\n");
            } else if (densidade_populacional_2 < densidade_populacional) {
                printf("Carta 2 venceu em Densidade populacional (MENOR vence)!\n");
            } else {
                printf("Empate em Densidade populacional!\n");
            }
            break;
        case 6:
            if (pib_percapita > pib_percapita_2) {
                printf("Carta 1 venceu em PIB per capita!\n");
            } else if (pib_percapita_2 > pib_percapita) {
                printf("Carta 2 venceu em PIB per capita!\n");
            } else {
                printf("Empate em PIB per capita!\n");
            }
            break;
        case 7:
            if (super_poder > super_poder_2) {
                printf("Carta 1 venceu em Super Poder!\n");
            } else if (super_poder_2 > super_poder) {
                printf("Carta 2 venceu em Super Poder!\n");
            } else {
                printf("Empate em Super Poder!\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha de 1 a 7.\n");
            break;
    }

    



 
















 
    return 0;
}
