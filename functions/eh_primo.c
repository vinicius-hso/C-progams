/*
Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é
primo, 0 em caso contrário
*/

#include <stdio.h>

int ehPrimo(int n) {
    int resp = 1;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) resp = 0;
    }
    return resp;
}

int main(int argc, const char * argv[]) {
    int n, r;
    printf("*** É PRIMO? ***\n\n");
    printf("Número: ");
    scanf("%d", &n);
    r = ehPrimo(n);
    switch (r) {
        case 1:
            printf("%d é primo!\n\n", n);
            break;
        default:
            printf("%d não é primo!\n\n", n);
            break;
    }
    
    return 0;
}
