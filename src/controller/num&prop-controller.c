#include <stdio.h>

#include "math/basic/arithmetic.h"
#include "ui/input.h"
#include "ui/menu.h"
#include "math/basic/num&prop.h"
#include "controller/num&prop-controller.h"

#define NUMPROP_OPTIONS 4
#define MAX_CHAR 100

bool numPropOperations(void)
{
    while (true)
    {
        showNumProp();
        int option = selectOption(NUMPROP_OPTIONS);

        if (option == 0)
            return false;

        switch (option)
        {
            case 1:
            {
                const int num = getNumber("Digite um número: ");

                if (isEven(num))
                    printf("%i eh par\n", num);
                else
                    printf("%i eh ímpar\n", num);

                break;
            }

            case 2:
            {
                const int num = getNumber("Digite um número: ");

                if (num < 0)
                {
                    printf("Não existe raiz real de número negativo!\n");
                    break;
                }

                if (isPrime(num))
                    printf("%i eh primo\n", num);
                else
                    printf("%i não eh primo\n", num);

                break;
            }

            case 3:
            {
                const int num = (int)getNumber("Digite um número: ");

                int list[MAX_CHAR];

                const int count = listOfDivisors(list, num);

                printf("Divisores: ");

                for (int i = 0; i < count; i++)
                {
                    if (i < count - 1)
                        printf("%d, ", list[i]);
                    else
                        printf("%d", list[i]);
                }

                printf("\n");

                break;
            }   

            case 4:
            {
                const int num = getNumber("Digite um número: ");
                const int qtdDivisors = numberOfDivisors(num);

                printf("O número de divisores é: %i", qtdDivisors);
                break;
            }

            default:
            {
                printf("Opção inválida!\n");
                break;
            }
        }
    }
}