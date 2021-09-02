/*
Dado um número inteiro positivo n, calcular a soma dos n primeiros
números naturais.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, soma = 0;
    
    printf("*** SOMA OS PRIMEIROS NÚMEROS ***\n\n");
    printf("Valor de n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; ++i) soma = soma + i;
    printf("Soma = %d\n\n", soma);
    return 0;
}