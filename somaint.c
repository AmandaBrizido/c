#include<stdio.h>
int main()
{
    int a = 5, b = 4;
    int soma;
    
    soma = a + b;
    
    printf("A soma de %d e %d é: %d\n",a, b, soma);
    
    if (soma > 10){
        printf("Número válido!!!");
    } 
    else {
        printf("Este número não valido!");
    } 
    return(0);
}



#include<stdio.h>
int main()
{
    int a, b;
    int soma;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    printf("Agora digite o segundo valor: ");
    scanf("%d",&b);
    
    soma = a + b;
    
    printf("A soma de %d e %d é: %d\n",a, b, soma);
    
    if (soma > 10){
        printf("Número válido!!!");
    } 
    else {
        printf("Este número não valido!");
    } 
    return(0);
}
