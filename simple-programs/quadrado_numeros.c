/*
Dada uma sequência de números inteiros não-nulos, começando por 1, imprimir seus quadrados.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, v[50];
    // tamanho do vetor
    printf("*** QUADRADO DOS NÚMEROS ***\n\n");
    printf("Quantidade de números: ");
    scanf("%d", &n);
    // entrada dos números
    for (int i = 0; i < n; ++i) {
        printf("%dº número: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nResultado:\n");
    for (int i = 0; i < n; ++i) {
        printf("%dˆ2 = %d\n", v[i], v[i]*v[i]);
    }
    
    return 0;
}