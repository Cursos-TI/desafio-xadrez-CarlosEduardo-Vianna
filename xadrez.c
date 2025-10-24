#include <stdio.h>

int main() {

    int b = 0;
    int r = 0;

    printf("### Movimento da torre ###\n");

    // mover a torre 5 casas a direita
    for (int t = 0; t < 5; t++){
        printf("Direita\n"); // imprime a direcao do movimento
    }


    printf("\n### Movimento do bispo ###\n");

    // mover o bispo em 5 casas a diagonal 
    while (b < 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        b++;
    }

    printf("\n### Movimento da rainha ###\n");

    //mover a rainha 8 casas a esquerda
    do
    {
        printf("esquerda\n");
        r++;
    } while (r < 8);
    
    

    return 0;
}