/*
Faça 3 funções:

ler: - uma função que receba dois número inteiro positivo n;
multiplicar: - que multiplique os números recebidos na função ler;
imprimir: - que imprima o resultado da função multiplicar.
*/

#include <stdio.h>

int *ler () {
    int *ptr;
    int nums[2];
    ptr = nums;
    printf("Número: ");
    scanf("%d", &nums[0]);
    printf("Número: ");
    scanf("%d", &nums[1]);
    return ptr;
}

int multiplicar (int *ptr) {
    int v[2], result;
    v[0] = *ptr;
    result = v[0] * v[1];
    return result;
}

void imprimir (int x) {
    printf("%d\n", x);
}

int main(int argc, const char * argv[]) {
    
    imprimir(multiplicar(ler()));
    
    
    return 0;
}