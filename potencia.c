/*
Dados um inteiro x e um inteiro não-negativo n, calcular xˆn.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int base, exp, resp = 0;
    printf("*** CALCULO DE POTÊNCIAS ***\n\n");
    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente: ");
    scanf("%d", &exp);
    resp = base * base;
    for (int i = 2; i < exp; ++i) {
        resp = resp * base;
    }
    printf("\n%dˆ%d = %d\n\n", base, exp, resp);
    return 0;
}