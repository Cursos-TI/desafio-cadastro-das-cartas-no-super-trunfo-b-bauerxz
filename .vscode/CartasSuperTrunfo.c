#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Informações dos dados (variaveis)
   
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[25], cidade2[25];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastre a Carta 1: \n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);
    
    printf("População: \n");
    scanf("%d", &populaçao1);
    
    printf("Área (km²): \n");
    scanf("%f", &area1);
    
    printf("PIB: \n");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    getchar();

    printf("Cadastre a Carta 2: \n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);
    
    printf("População: \n");
    scanf("%d", &populaçao2);
    
    printf("Área (km²): \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Informações Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", cidade1);
    printf("População: %d \n", populaçao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1); 

    printf("Informações Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", cidade2);
    printf("População: %d \n", populaçao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
