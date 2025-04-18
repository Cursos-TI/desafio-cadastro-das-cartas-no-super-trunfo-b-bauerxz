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
    unsigned long int populacao1, populacao2; // Modificado para o "u.l.i"
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Variáveis a serem calculadas 
    float densidade1, densidade2;
    float pib_per_capta1, pib_per_capta2;
    float super_poder1, super_poder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // cadastro da primeira cidade
    printf("Cadastre a Carta 1: \n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado1); // %c -> lê um único caractere, que seria a sigla do estado

    printf("Código da Carta: \n");
    scanf("%s", codigo1); // %s -> lê a string (texto sem espaço), armazenada num array
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);
    
    printf("População: \n");
    scanf("%lu", &populacao1); // %lu -> lê um núm. long un.i.
    
    printf("Área (km²): \n");
    scanf("%f", &area1); // %f -> lê um núm. decimal
    
    printf("PIB: \n");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    getchar(); // Para evitar problemas na leitura do próx. caractere

    // cadastro da segunda cidade
    printf("Cadastre a Carta 2: \n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);
    
    printf("População: \n");
    scanf("%lu", &populacao2);
    
    printf("Área (km²): \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Cálculo com os operadores
    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    pib_per_capta1 = (populacao1 != 0) ? (pib1 * 1000000000) / populacao1 : 0;

    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;
    pib_per_capta2 = (populacao2 != 0) ? (pib2 * 1000000000) / populacao2 : 0;

    // Cálculo do Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capta1 + ((densidade1 !=0) ? (1 / densidade1) : 0); // o inverso da densidade
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capta2 + ((densidade2 !=0) ? (1 / densidade2) : 0);
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Informações da carta 1 conforme preenchido
    printf("Informações Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capta: %.2f reais\n", pib_per_capta1);
    printf("Super Poder: %.2f\n", super_poder1); 

    // Informações da carta 2 conforme preenchido
    printf("Informações Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n ", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capta: %.2f reais\n", pib_per_capta2);
    printf("Super Poder: %.2f\n", super_poder2); 

    // Comparar as cartas
    // População
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu! (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));

    // Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    
    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    
    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2));
    
    // Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));  // Menor densidade vence
    
    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capta1 > pib_per_capta2) ? 1 : 2, (pib_per_capta1 > pib_per_capta2));
    
    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0; // Finaliza o programa

}
