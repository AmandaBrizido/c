#include <stdio.h>

int main()
{
    char myName[14];
    char curse[10];
    int age;
    int num;
    
    printf("Escreva seu nome?\n");
    scanf("%s",myName);
    
    printf("E qual curso voce faz?\n");
    scanf("%s",curse);
    
    printf("Ah que legal %s!!! E quantos anos voce tem?\n",myName);
    scanf("%d",&age);
    
    if (age<18) {
        printf ("Poxa, infelizmente não vamos poder prosseguir aqui");
    } 
    else {
        printf ("Ah então voce pode fazer parte da nossa empresa!\nVamos continuar...\n\n\n");
    }
    
    printf ("Bom,voce possui alguma deficiencia?\n\n");
    printf ("Se sim, digite o número 1\nSe não, digite o número 2\nCaso não tenha certeza digite o número 3\n");
    scanf ("%d",&num);
    
    switch (num) {
        case 1:
            printf ("E quais seriam?");
            break;
            
        case 2:
            printf ("Não posssui nenhum? ok então.");
            break;
            
        case 3:
            printf ("Não tem certeza ainda né");
            break;
            
        default:
            printf ("Não foi informado");
    }
    return 0;
}
