#include <stdio.h>
int main(){
    int torre = 0;
    int bispo = 0;
    int rainha;

    printf("suas pecas se moveram da seguinte maneira: \n");

    while(torre < 5)
    {
        torre++;
        printf("torre : %d casas para a direita\n", torre);
    }

    printf("torre se moveu %d casas para a direita\n", torre);
    printf("\n");

    do
    {
        bispo++;
        printf("bispo : %d casas diagonal direita cima\n", bispo);
    } while (bispo < 5);

    printf("bispo se moveu %d casas para a diagonal direita cima", bispo);
    printf("\n");
    printf("\n");

    for(int esquerda = 1; esquerda <= 8; esquerda++)
    {

        rainha = esquerda;
        printf("rainha : %d casas para esquerda\n", rainha);
    }

    printf("rainha se moveu %d casas para esquerda\n", rainha);
}
