/*
Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna XZ.
(sem utilizar funções prontas)
*/

#include <stdio.h>

int potenciaRecursiva (int x, int z) {
    if (z == 0) return 1;
    return potenciaRecursiva(x, z-1) * x;
}

int main(int argc, const char * argv[]) {
    int x, z, r;
    printf("*** POTÊNCIA RECURSIVA ***\n\n");
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &z);
    r = potenciaRecursiva(x, z);
    printf("%d^%d = %d\n", x, z, r);
    
    return 0;
}
