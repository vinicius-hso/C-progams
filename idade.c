/*
Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int anoNascimento, idade;
    printf("*** IDADE ***\n");
    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);
    idade = 2021 - anoNascimento;
    printf("Idade: %d\n", idade);
    return 0;
}