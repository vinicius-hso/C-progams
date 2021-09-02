/* 
Dado um número inteiro positivo n verificar se é par ou ímpar.
Apresente uma mensagem na tela informando o número e o resultado.
OBS: % utilizado para calcular o resto. If ((N % 2==0)
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("*** PAR OU ÍMPAR ***\n");
    printf("Insira um número: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Número %d é par!", n);
    else printf("Número %d é impar!\n", n);
    return 0;
}
