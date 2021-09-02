/*
Escreva uma função que leia um inteiro não-negativo n e imprima a soma
dos n primeiros números primos.
*/

#include <stdio.h>

int somaNprimos(int n) {
    int cont = 0, v[50], soma = 0;
    for (int i = 2; cont < n; ++i) {
        int flag = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                flag = 0;
            }
        }
        if (flag == 1) {
            v[cont] = i;
            soma = soma + i;
            cont++;
            if(cont == 1) printf("%d ", i);
            else printf("+ %d ", i);
        }
    }

    return soma;
}

int main(int argc, const char * argv[]) {
    int n, r;
    printf("*** SOMA PRIMOS ***\n\n");
    printf("Quantos números primos quer somar? ... ");
    scanf("%d", &n);
    r = somaNprimos(n);
    printf("= %d\n", r);
    return 0;
}
