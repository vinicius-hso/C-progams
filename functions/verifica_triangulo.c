/*
Escreva uma função que recebes 3 valores inteiros e positivos X, Y e Z
e que verifique se esses valores podem ser os comprimentos dos lados de
um triângulo e, neste caso, retornar qual o tipo de triângulo formado.
Para que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado de um triângulo
é menor do que a soma do comprimento dos outros dois lados.
O procedimento deve identificar o tipo de triângulo formado observando
as seguintes definições:

o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
 */

#include <stdio.h>

void verificaTriangulo(int x, int y, int z) {
    if (x == y && y == z) {
        printf("Triângulo Equilátero\n");
    } else {
        if (x > y + z || y > x + z || z > x + y) {
            printf("Não é um triângulo\n");
        } else {
            if (x == y || x == z || y == z) {
                printf("Triângulo Isósceles\n");
            } else {
                printf("Triângulo Escaleno\n");
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int t[3];
    printf("*** VERIFICA TRIÂNGULO ***\n\n");
    for (int i = 0; i < 3; ++i) {
        printf("%dº lado do triângulo: ", i+1);
        scanf("%d", &t[i]);
    }
    verificaTriangulo(t[0], t[1], t[2]);
    
    return 0;
}
