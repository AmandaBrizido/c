#include<stdio.h>
int main() {
    int n, quantidade = 0;
    int soma = 0;
    printf("Digite um numero positivo para ser somado ou negativo para sair: ");
    scanf("%d", &n);
    
    while( n >= 0 ) {
        soma = soma + n;
        printf("Digite um numero positivo para ser somado ou negativo para sair: ");
        scanf("%d", &n);
        quantidade++;
    }
    printf("A soma eh %d\n", soma);
    printf("A quantidade de numeros digitados e´: %d\n", quantidade);
    
    return 0;
}
