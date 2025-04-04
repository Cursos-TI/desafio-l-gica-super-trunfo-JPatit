#include <stdio.h>

int main() {

    printf("Carta 1:\n");
    char Estado = 'A';
    char Codigo[10] = "A01";
    char Cidade[10] = "Sao Paulo";
    unsigned long int Populacao1 = 11895578;
    float Area1 = 1521.20;
    float PIB1 = 857.62;
    int Turismo1 = 36;
    float Densidade_Populacional1 = (float) Populacao1 / Area1;
    float PIB_per_capita1 = (PIB1 * 1000000000) / Populacao1;
    float Super_Poder1 = Populacao1 + Area1 + PIB1 + Turismo1 + PIB_per_capita1 + (1/Densidade_Populacional1);
    int jogador1;

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao %u\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Turismo: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1);
    printf("Super Poder: %.2f\n", Super_Poder1);

    printf("\n");

    printf("Carta 2:\n");
    char estado = 'B';
    char codigo [10] = "B01";
    char cidade [20] = "Rio de Janeiro";
    unsigned long int populacao2 = 6729894;
    float area2 = 1200;
    float pib2 = 400.00;
    int turismo2 = 58;
    float densidade_populacional2 = (float) populacao2 / area2;
    float Pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + turismo2 + Pib_per_capita2 + (1/densidade_populacional2);

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao %u\n", populacao2);
    printf("Area: %.f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Turismo: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", Pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    printf("\n");
    
    printf("Duelo de Cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Qual Atributo Usar?: ");
    scanf("%d", &jogador1);
    
    switch (jogador1)
    {
    case 1:
        printf("São Paulo - Rio de Janeiro\n");
        printf("População:\n");
        printf("São Paulo: 11895578\n");
        printf("Rio de Janeiro: 6729894\n");
        if(Populacao1 > populacao2)
        printf("São Paulo venceu!\n");
    else if (Populacao1 < populacao2)
        printf("Rio de Janeiro venceu!\n");
    else printf("Empate!\n");
    break;

    case 2:
        printf("São Paulo - Rio de Janeiro\n");
        printf("Área:\n");
        printf("São Paulo: 1521.20 km²\n");
        printf("Rio de Janeiro: 1200 km²\n");
        if(Area1 > area2)
        printf("São Paulo venceu!\n");
    else if (Area1 < area2)
        printf("Rio de Janeiro venceu\n");
    else printf("Empate\n");
    break;

    case 3:
        printf("São Paulo - Rio de Janeiro\n");
        printf("PIB:\n");
        printf("São Paulo: 857.62 bilhões\n");
        printf("Rio de Janeiro: 400.00 bilhões\n");
        if(PIB1 > pib2)
        printf("São Paulo venceu!\n");
    else if (PIB1 < pib2)
        printf("Rio de Janeiro venceu\n");
    else printf("Empate\n");
    break;

    case 4:
    printf("São Paulo - Rio de Janeiro\n");
    printf("Pontos Turisticos:\n");
    printf("São Paulo: 36\n");
    printf("Rio de Janeiro: 58\n");
    if(Turismo1 > turismo2)
    printf("São Paulo venceu!\n");
    else if (Turismo1 < turismo2)
    printf("Rio de Janeiro venceu\n");
    else printf("Empate\n");
    break;

    case 5:
    printf("São Paulo - Rio de Janeiro\n");
    printf("Densidade Populacional:\n");
    printf("São Paulo: 7819.86 hab/km²\n");
    printf("Rio de Janeiro: 5608.25 hab/km²\n");
    if(Densidade_Populacional1 < densidade_populacional2)
    printf("São Paulo venceu!\n");
    else if (Densidade_Populacional1 > densidade_populacional2)
    printf("Rio de Janeiro venceu\n");
    else printf("Empate\n");
    break;

    default:
    printf("Opção Invalida!");
    }

    return 0;
}
