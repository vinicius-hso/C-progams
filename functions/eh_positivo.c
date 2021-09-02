/*
Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é
par e 0 se n é impar.
*/

#include <stdio.h>

int ehPositivo (int n) {
    if (n % 2 == 0) return 1;
    else return 0;
}

int main(int argc, const char * argv[]) {
    
    int n, result;
    printf("*** É POSITIVO? *** \n");
    printf("Insira o número: ");
    scanf("%d", &n);
    result = ehPositivo(n);
    printf("%d\n", result);
    
    return 0;
}
