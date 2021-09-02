/*
Calcular a tabuada de um número fornecido pelo usuário
multiplicado de 0 a 12. O resultado deverá ser apresentado
da seguinte maneira:
 
Número   x   0   =  Resultado1.
Número   x   1   =  Resultado2.
 .
 .
 .
Número   x   12   =  Resultado2.
*/
 
#include <stdio.h>

#define N 13

void tabuada(int n)
{
    for (int i = 0; i < N; ++i) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main(int argc, const char * argv[]) {
    int n;
    
    printf("*** TABUADA ***\n\nNúmero...");
    scanf("%d", &n);
    printf("\n");
    
    tabuada(n);
    printf("\n*** FIM ***\n\n");
    return 0;
}
