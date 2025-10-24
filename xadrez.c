#include <stdio.h>

int main() {

    int b = 0;
    int r = 0;
    int c = 0;
    int opcao;

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

    printf("\n### Movimento do cavalo ###\n");

    // O usuario escolhe a direção que o cavalo vai se mover
    printf("Escolha a direção que o cavalo vai se mover!\n");
    printf("1. baixo e esquerda\n");
    printf("2. baixo e direita\n");
    scanf("%d", &opcao);

    // menu interativo
    switch (opcao)
    {
    case 1:
         while (c < 1)
    {
        c++;

        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        
        printf("Esquerda\n");
    }
        break;
    
    case 2:
         while (c < 1)
    {
        c++;

        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        
        printf("Direita\n");
    }
        break;
    
    default:
        printf("Opção invalida");
    
    break;
    }

    return 0;
}