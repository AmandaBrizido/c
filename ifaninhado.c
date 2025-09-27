#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num = 50;
    bool myRotine = false;
    
    if (num >= 48) {
        printf ("Hoje eu preciso estudar\n");
        
        if (myRotine) {
            printf ("Ir a academia\n");
        }else {
            printf ("Lavar o cabelo\n");
        }
    } else{
        printf ("E terminar meu seminário\n");
    }
        
    return 0;
}
