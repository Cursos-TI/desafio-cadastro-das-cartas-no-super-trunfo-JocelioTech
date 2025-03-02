#include <stdio.h>

    int main(){
        char estado [10];
        char codigo [3];
        char nome [10];
        int populacao;
        float area;
        float pib;
        int numeros;

        printf("digite seu estado: \n");
        scanf("%s", &estado);

        printf("digite o codigo da carta: \n");
        scanf("%s", &codigo);

        printf("digite o nome da cidade: \n");
        scanf("%s", &nome);

        printf("digite da populacao: \n");
        scanf("%d", &populacao);

        printf("digite a area da cidade: \n");
        scanf("%f", &area);

        printf("digite o pib: \n");
        scanf("%f", &pib);

        printf("digite o numeros de pontos turisticos: \n");
        scanf("%d", &numeros);

        return 0;


    }