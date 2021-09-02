/*
Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("*** PRIMEIROS NATURAIS ÍMPARES ***\n\n");
    printf("Valor de n: ");
    scanf("%d", &n);
    printf("\nPrimeiros naturais ímpares:\n");
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) printf("%d ", i);
    }
    printf("\n\n");
    return 0;
}