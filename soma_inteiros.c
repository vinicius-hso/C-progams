/*
Dado dois números inteiros positivos n, calcular e imprimir a sua soma.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n1, n2, soma;
    printf("*** SOMA ***\n");
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("Soma: %d + %d = %d\n", n1, n2, soma);
    
    return 0;
}