/*
Faça uma função que receba, por parâmetro, um valor inteiro e positivo
e retorna o número de divisores desse valor
*/

#include <stdio.h>

int numeroDivisores (int n) {
    int c = 2;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) c++;
    }
    return c;
}

int main(int argc, const char * argv[]) {
    int n = -1, r;
    printf("*** NÚMERO DE DIVISORES ***\n\n");
    do {
        printf("Insira um número inteiro positivo: ");
        scanf("%d", &n);
    } while (n < 0);
    r = numeroDivisores(n);
    printf("%d possui %d divisores\n", n, r);
    return 0;
}