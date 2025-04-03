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
     

    printf("\nResumo da cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Número de habitantes: %.0f\n", numero_de_habitantes);
    printf("Área em Km²: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("Pib percapita: %.2f Reais\n", pib_percapita);



 


 


 


 


 


 


 

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



 

    printf("informe os dados da carta 2 \n");
 


 

    printf("Código da carta (Letra + Número. Ex.: A02): ");
    scanf(" %[^\n]s", codigo_da_carta_2);
    printf("\nEstado: ");  
    scanf(" %[^\n]s", estado_2);
    printf("cidade: ");
    scanf(" %[^\n]s", cidade_2);
    printf("Número de habitantes: ");
    scanf("%d", &numero_de_habitantes_2);
    printf("Área em Km2: ");
    scanf("%f", &area_em_km2_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("N° de pontos turísticos: ");
    scanf("%d", &numeros_de_pontos_turisticos_2); 
     
    
    densidade_populacional = (area_em_km2 > 0) * (numero_de_habitantes / area_em_km2);
    
    pib_percapita = (numero_de_habitantes > 0) * (pib / numero_de_habitantes);




    printf("\nCARTA %s \n", codigo_da_carta);
 

    printf("\n Resumo da cidade 01:\n");
    printf("\nEstado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Número de habitantes: %.3d\n", numero_de_habitantes);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_de_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("Pib percapita: %.2f Reais\n", pib_percapita);

 

    printf("\n\n");
 


 

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
    
 

 

 
    return 0;
}
