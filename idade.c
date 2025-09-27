#include <stdio.h>

int main(void) {
    float idade;
    char nome[] = "Julia Souza";
    printf("Digite a idade: ");
    scanf("%f",&idade);

    if (idade>=18) {
        printf("%s é maior de idade",nome);
    }
    else {
        printf("%s é menor de idade",nome);
    }

    return 0;
}
