
#include <stdio.h>
int main()
{
    float notas[5];
    for(int i=0;i<5;i++){
    printf("Digite a nota %d: ", i+1);
    scanf("%f",&notas[i]);
    }
    for(int i=0;i<5;i++){
        printf("A nota %d é %2.f \n", i+1, notas[i]);
    }
    return 0;
}











