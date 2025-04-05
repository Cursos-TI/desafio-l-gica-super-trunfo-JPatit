#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1, resultado2, resultado3, atributo1, atributo2, atributo3;

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

    printf("Duelo de Cartas!\n");
    printf("Escolha o Primeiro Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Qual Atributo Usar?: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
    printf("População:\n");
    printf("São Paulo: %u\n", Populacao1);
    printf("Rio de Janeiro: %u\n", populacao2);
    resultado1 = Populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
    printf("Área:\n");
    printf("São Paulo: %.2f\n", Area1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado1 = Area1 > area2 ? 1 : 0;
        break;
    case 3:
    printf("PIB:\n");
    printf("São Paulo: %.2f\n", PIB1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado1 = PIB1 > pib2 ? 1 : 0; 
        break;
    case 4:
    printf("Pontos Turiscos:\n");
    printf("São Paulo: %d\n", Turismo1);
    printf("Rio de Janeiro: %d\n", turismo2);
    resultado1 = Turismo1 > turismo2 ? 1 : 0;
        break;
    case 5:
    printf("Densidade Populacional:\n");
    printf("São Paulo: %.2f\n", Densidade_Populacional1);
    printf("Rio de Janeiro: %.2f\n", densidade_populacional2);
    resultado1 = Densidade_Populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    default:
    printf("Opção Invalida\n");
        break;
    }

    printf("Escolha o Segundo Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Qual Atributo Usar?: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Esse atributo já foi escolhido\n");
    } else {     
    switch (atributo2){
    case 1:
    printf("População:\n");
    printf("São Paulo: %u\n", Populacao1);
    printf("Rio de Janeiro: %u\n", populacao2);
    resultado2 = Populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
    printf("Área:\n");
    printf("São Paulo: %.2f\n", Area1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado2 = Area1 > area2 ? 1 : 0;
        break;
    case 3:
    printf("PIB:\n");
    printf("São Paulo: %.2f\n", PIB1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado2 = PIB1 > pib2 ? 1 : 0; 
        break;
    case 4:
    printf("Pontos Turiscos:\n");
    printf("São Paulo: %d\n", Turismo1);
    printf("Rio de Janeiro: %d\n", turismo2);
    resultado2 = Turismo1 > turismo2 ? 1 : 0;
        break;
    case 5:
    printf("Densidade Populacional:\n");
    printf("São Paulo: %.2f\n", Densidade_Populacional1);
    printf("Rio de Janeiro: %.2f\n", densidade_populacional2);
    resultado2 = Densidade_Populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    default:
    printf("Opção Invalida\n");
        break; }
    }

    printf("Escolha o Terceiro Atributo:\n");
        printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Qual Atributo Usar?: ");
    scanf("%d", &atributo3);
    if(atributo3 == atributo1 && atributo3 == atributo2){
        printf("Esse atributo ja foi escolhido\n");
    } else {
    switch (atributo3){
    case 1:
    printf("População:\n");
    printf("São Paulo: %u\n", Populacao1);
    printf("Rio de Janeiro: %u\n", populacao2);
    resultado3 = Populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
    printf("Área:\n");
    printf("São Paulo: %.2f\n", Area1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado3 = Area1 > area2 ? 1 : 0;
        break;
    case 3:
    printf("PIB:\n");
    printf("São Paulo: %.2f\n", PIB1);
    printf("Rio de Janeiro: %.2f\n", area2);
    resultado3 = PIB1 > pib2 ? 1 : 0; 
        break;
    case 4:
    printf("Pontos Turiscos:\n");
    printf("São Paulo: %d\n", Turismo1);
    printf("Rio de Janeiro: %d\n", turismo2);
    resultado3 = Turismo1 > turismo2 ? 1 : 0;
        break;
    case 5:
    printf("Densidade Populacional:\n");
    printf("São Paulo: %.2f\n", Densidade_Populacional1);
    printf("Rio de Janeiro: %.2f\n", densidade_populacional2);
    resultado3 = Densidade_Populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    default:
    printf("Opção Invalida\n");
        break; }
    }

    if(resultado1 && resultado2 || resultado1 && resultado3 || resultado2 && resultado3){
        printf("Você Ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    } 

    return 0;
}