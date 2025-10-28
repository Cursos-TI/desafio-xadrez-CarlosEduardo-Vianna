#include <stdio.h>

void  moverTorre(int casas) {
    // move a torre 5 casas a direita
    if (casas > 0) {
        printf("Direira \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {   
    // move o bispo 5 casas a diagonal
    // loop externo
    for (int i = casas; i > 0; i--) {
        // loop interno
        for (int j = 1; j > 0; j--) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

void moverRainha(int casas) {
    // move a rainha 8 casas a esquerda
    do
    {
        printf("esquerda\n");
        casas--;
    } while (casas > 0);
}

int main() {

    int opcao;
    int c = 0;

    printf("\n### Movimento da Torre ###\n");
    moverTorre(5);

    printf("\n### Movimento do Bispo ###\n");
    moverBispo(5);

    printf("\n### Movimento da Rainha ###\n");
    moverRainha(8);

    printf("\n### Movimento do cavalo ###\n");

    // O usuario escolhe em qual direcao o cavalo vai se mover
    printf("Escolha a direção que o cavalo vai se mover!\n");
    printf("1. baixo e esquerda\n");
    printf("2. baixo e direita\n");
    printf("3. cima e direita\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // Movimento Baixo e Esquerda
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
    
    case 2: // Movimento Baixo e Direira
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
    
    
    case 3: // Movimento Cima e Direita
        for (int i = 0, j = 0; i < 2 || j < 1; ) // múltiplas variáveis no loop
    {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue; // volta ao início até terminar o movimento vertical
        }

        if (j < 1) {
            printf("Direita\n");
            j++;
        }

        // se ambos movimentos foram feitos, interrompe o loop
        if (i >= 2 && j >= 1) {
            break;
        }
    }
        break;


    default:
        printf("Opção invalida");
    
    break;
    }

    return 0;
}

