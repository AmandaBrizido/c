#include <stdio.h>
#include <math.h>
int main(void) {
    float A, B, C, D, X, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f",&A);
    printf("Digite o valor de B: ");
    scanf("%f",&B);
    printf("Digite o valor de C: ");
    scanf("%f",&C);
    D = B*B - 4*A*C;
    if (D<0) {
        printf("Não existe raiz");
    }
    if (D==0) {
        X = -B/(2*A);
        printf("Existe apenas uma raiz: %.2f", X);
    }
    if (D>0) {
        x1 = (-B + sqrt(D))/ (2*A);
        x2 = (-B - sqrt(D))/ (2*A);
        printf("As raizes são: %.2f e %.2f", x1,x2);
    }
    return 0;
}
