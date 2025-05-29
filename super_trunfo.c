#include <stdio.h>
//Manipular cadeias de caracteres
#include <string.h>

int main(){
    
    //Dados de entrada para as cartas
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

    //Inserir os dados da primeira Carta de Super Trunfo
    printf("Insira os dados da primeira carta de Super Trunfo\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    getchar(); //limpar o buffer de entrada

    printf("Digite o codigo: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a populacao: \n" );
    scanf("%i", &populacao1);
    getchar();

    printf("Digite a area: \n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
     getchar();

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &pontosturisticos1);
    getchar();

    //Inserir os dados da segunda Carta de Super Trunfo
    printf("Insira os dados da segunda carta de Super Trunfo\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    getchar(); //limpar o buffer de entrada

    printf("Digite o codigo: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a populacao: \n" );
    scanf("%i", &populacao2);
    getchar();

    printf("Digite a area: \n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    getchar();
   
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &pontosturisticos2);
    getchar();
   
    //Exibir os dados digitados da primeira carta de Super Trunfo
    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %.2f\n", area1); //formatação com 2 casas decimais
    printf("PIB: %.2f\n", pib1); //formatação com 2 casas decimais
    printf("Pontos Turisticos: %i\n", pontosturisticos1);

    //Exibir os dados digitados da segunda carta de Super Trunfo
    printf("\n--- Segunda carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f\n", area2); //formatação com 2 casas decimais
    printf("PIB: %.2f\n", pib2); //formatação com 2 casas decimais
    printf("Pontos Turisticos: %i\n", pontosturisticos2);


return 0;

}

