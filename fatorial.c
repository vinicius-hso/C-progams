/* 
Calcular o fatorial de um número fornecido pelo usuário.
A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int r, f, n;
    printf("*** FATORIAL ***\n");
    printf("Número: ");
    scanf("%d", &n);
    f = n;
    r = f - 1;
    do {
        f = f * r;
        r--;
    } while (r > 0);
    printf("Fatorial de %d! = %d\n", n, f);
    return 0;
}