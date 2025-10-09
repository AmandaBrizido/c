
#include <stdio.h>
int main() 
{ 
     int preco,quant,resp;
     float sub_venda,total_geral;
     do 
     { 
        printf("\nInsira o preço do produto: ");
        scanf("%d",&preco);
          
        printf("Insira a quantidade vendida: ");
        scanf("%d",&quant);
          
        sub_venda = preco * quant;
        total_geral += sub_venda;

        printf("Digite 1 se quer registrar outro produto:\nE 0 se quiser encerrar:\n");
        scanf("%d",&resp);
        
        printf("O valor total deu: %2.f", total_geral);

     } while(resp != 0 ); 
     
     return 0; 
}
