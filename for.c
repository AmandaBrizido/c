#include <stdio.h>
int main()
{
    int salario[3];
    for(int i=0;i<=2;i++){
    printf("Digite o salário %d: ", i+1);
    scanf("%d",&salario[i]);
    }
    for(int i=0;i<=2;i++){
        printf("O salário %d é %d \n", i+1, salario[i]);
    }
    return 0;
}











