#include <stdio.h>
int main(void) {
    int matriz[3][3];
    int somaTotal = 0;
    int somaDiagonal = 0;
    int somaLinha[3];
    int somaColuna[3];
    int i,j;
    
    //Inicialização das somas
    for (i=0; i<3; i++) {
        somaLinha[i] = 0;
        somaColuna[i] = 0;
    }
    //Leitura da matriz
    printf ("Digite os valores da matriz 3x3:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++){
            printf ("Digite o valor da posição [%d][%d]:",i+1,j+1);
            scanf ("%d",&matriz[i][j]);
        }
    }
    //Cálculo das somas
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            somaTotal += matriz[i][j];
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
                if (i==j) {
                    somaDiagonal += matriz[i][j];
                }
        }
    }
    //Exibição dos Resultados
    printf("\n--- RESULTADOS ---\n");
    printf("a) Soma total dos elementos: %d\n", somaTotal);

    printf("\nb) Soma dos elementos de cada linha:\n");
        for (i = 0; i < 3; i++) {
            printf("   Linha %d: %d\n", i + 1, somaLinha[i]);
        }
    printf("\nc) Soma dos elementos de cada coluna:\n");
        for (j = 0; j < 3; j++) {
            printf("   Coluna %d: %d\n", j + 1, somaColuna[j]);
        }
    printf("\nd) Soma dos elementos da diagonal principal: %d\n", somaDiagonal);
    
    return 0;
  }
