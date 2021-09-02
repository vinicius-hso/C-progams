/*
 Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
 A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
 Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
 */

#include <stdio.h>

int fatorialRecursivo (int n) {
    if (n == 1) return 1;
    return fatorialRecursivo(n-1) * n;
}

int main(int argc, const char * argv[]) {
    int n, r;
    
    printf("*** FATORIAL RECURSIVO ***\n\n");
    printf("Insira um número: ");
    scanf("%d", &n);
    r = fatorialRecursivo(n);
    printf("%d! = %d\n", n, r);
    return 0;
}