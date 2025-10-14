#include <stdio.h>
int main()
{
    int v[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Digite o elemento v[%d][%d]: ",i,j);
            scanf("%d",&v[i][j]);
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
