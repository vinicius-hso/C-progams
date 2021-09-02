/*
Dado um número positivo n, imprimir seu quadrado.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, res;
    printf("*** QUADRADO DE UM NÚMERO ***\n");
    printf("Número: ");
    scanf("%d", &n);
    res = n * n;
    printf("Resultado: %d\n", res);
    return 0;
}