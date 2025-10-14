#include <stdio.h>

int main() {
    int v[2][2] = { {50,30},{10,70} };
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf ("%d ",v[i][j]);
        }
    printf ("\n");
    }
    return 0;
}
