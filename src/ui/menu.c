#include <stdio.h>

#include "ui/menu.h"

// UI basica
void showMenu(void)
{
    printf("---------- MENU ----------\n");
    printf("\n");
    printf("1 - Matematica Basica\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("--------------------------\n");
}

// ----------------------------------------- Matematica basica -------------------------------------------

void showBasicMath(void)
{
    printf("---------- Matematica Basica ----------\n");
    printf("\n");
    printf("1 - Operações Aritimeticas\n");
    printf("2 - Porcentagem\n");
    printf("3 - Estatística\n");
    printf("4 - Números e propiedades\n");
    printf("0 - Voltar\n");
    printf("\n");
    printf("---------------------------------------\n");
}

void showArithmeticOperations(void)
{
    printf("---------- Operações Aritméticas ----------\n");
    printf("\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Potenciação\n");
    printf("6 - Raiz quadrada\n");
    printf("0 - Voltar\n");
    printf("\n");
    printf("-------------------------------------------\n");
}

void showPorcentage(void)
{
    printf("---------- Porcentagem ----------\n");
    printf("\n");
    printf("1 - Porcentagem\n");
    printf("2 - Aumento\n");
    printf("3 - Desconto\n");
    printf("0 - Voltar");
    printf("\n");
    printf("---------------------------------\n");
}

void showStatistic(void)
{
    printf("---------- Estatística ----------\n");
    printf("\n");
    printf("1 - Média de dois valores\n");
    printf("2 - Média de multiplos valores\n");
    printf("3 - Mediana de valores\n");
    printf("0 - Voltar");
    printf("\n");
    printf("---------------------------------\n");
}

void showNumProp(void)
{
    printf("---------- Números e Propiedades ----------\n");
    printf("\n");
    printf("1 - Ímpar ou par\n");
    printf("2 - Número primo\n");
    printf("3 - Lista de divisores\n");
    printf("0 - Voltar");
    printf("\n");
    printf("---------------------------------\n");
}
