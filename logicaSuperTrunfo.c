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

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao %ul\n", Populacao1);
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
    printf("Populacao %ul\n", populacao2);
    printf("Area: %.f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Turismo: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", Pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    printf("\n");
    
    printf("Comparação de Cartas:\n");

    if (Populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }
    
    if (Area1 > area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }
    
    if (PIB1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }
    
    if (Turismo1 > turismo2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }
    
    if (Densidade_Populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }
    
    if (PIB_per_capita1 > Pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }
    
    if (Super_Poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }
    return 0;
}
