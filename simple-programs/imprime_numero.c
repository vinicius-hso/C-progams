/*
Faça um programa que solicite um número (inteiro/positivo) e imprima-o.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, flag = 0;
    // Solicita uma entrada
    do {
        printf("Insira um número inteiro positivo: ");
        scanf("%d", &n);
        if (n > 0) flag = 1;
    } while (flag == 0);
    // Imprime o dado digitado
    printf("Número inserido: %d\n", n);
    
    return 0;
}