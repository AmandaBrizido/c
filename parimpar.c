
#include <stdio.h>
int main() 
{ 
     int n; 
     do 
     { 
          printf("Digite um numero: ");
          scanf("%d", &n); 

        if (n % 2 == 0) 
            printf("%d Esse numero é par! ",n);
            
        else
            printf ("%d Esse numero é impar\n",n);

     } while( n != 0 ); 
     
     return 0; 
}
