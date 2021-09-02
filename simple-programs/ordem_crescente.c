/*
Dados três números, imprimi-los em ordem crescente.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int V[3], i, j, k = 2, temp;
    // Lendo as entradas
    for (i = 0; i < 3; i++) {
        printf("Número: ");
        scanf("%d", &V[i]);
    }
    // Ordenando de forma crescente
    for (i = 0; i <= k; k--) {
        for (j = 0; j <= k; j++) {
            if (V[i] > V[k]) {
                temp = V[k];
                V[k] = V[i];
                V[i] = temp;
            }
        }
    }
    // Imprimindo
    for (i = 0; i < 3; i++) printf("%d ", V[i]);
    return 0;
}
