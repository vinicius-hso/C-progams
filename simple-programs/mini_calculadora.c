/*
 Crie um programa por meio do qual o usuário irá digitar
 a operação desejada e dois valores, ao final deverá ser
 exibido o resultado da operação.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int flag = 1, i;
    int a, b;
    a = b = 0;
    do
    {
        printf("*** CALCULADORA ***\n\n");
        
        printf("    [1] - DIVISÃO\n");
        printf("    [2] - RESTO DA DIVISÃO\n");
        printf("    [3] - ADIÇÃO\n");
        printf("    [4] - MULTIPLICAÇÃO\n");
        printf("    [5] - SAIR\n");
        printf("\n...");
        scanf("%d", &i);
        if (i != 5) {
            printf("\nPrimerio número...");
            scanf("%d", &a);
            printf("Segundo número...");
            scanf("%d", &b);
        }
        
        switch (i) {
            case 1:
                printf("\nRESULTADO: %d\n\n", a/b);
                break;
            case 2:
                printf("\nRESULTADO: %d\n\n", a%b);
                break;
            case 3:
                printf("\nRESULTADO: %d\n\n", a+b);
                break;
            case 4:
                printf("\nRESULTADO: %d\n\n", a*b);
                break;
            case 5:
                flag = 0;
                printf("*** FIM ***\n");
                break;
            default:
                printf("OPERAÇÃO INVÁLIDA\n");
                break;
        }
    } while(flag == 1);
    
    return 0;
}
