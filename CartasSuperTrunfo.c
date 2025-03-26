#include <stdio.h>




int main() {
    char tema[100] = "Desafio Super Trunfo - Países";
    char tema2[100] = "Cadastro de informações da cidade";
    char tema3[50] = "Dados";

    
    char estado[100];
    char codigo_da_carta[100];
    char cidade[100];
    int numero_de_habitantes;
    float area_em_km2;
    float pib;
    int numeros_de_pontos_turisticos;
    
     printf("\n %s\n", tema);
    printf("\n%s\n", tema2);
    printf("\n%s\n", tema3);
    
   printf("\nEstado: ");  
    fgets(estado, 100, stdin);
    

    printf("Código da carta: ");
    scanf("%s", &codigo_da_carta);
    getchar();
    printf("cidade:");
    fgets(cidade, sizeof(cidade), stdin);
    
    printf("Número de habitantes: ");
    scanf("%d", &numero_de_habitantes);
    
    printf("Área em Km2: ");
    scanf("%f", &area_em_km2);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("N° de pontos turísticos:\n");
    scanf("%d", &numeros_de_pontos_turisticos); 
    
    
    printf("\n Resumo da cidade:\n");
    printf("\nEstado: %s", estado);
    printf("Cidade: %s", cidade);
    printf("Número de habitantes: %d\n", numero_de_habitantes);
    printf("Área em Km2: %.2d\n", area_em_km2);
    printf("PIB: %.2d\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_de_pontos_turisticos);
    
    
    
    return 0;
    
    
    }
