#include <stdbool.h>
#include <stdio.h>

#include "math/basic/arithmetic.h"
#include "math/basic/num&prop.h"

bool isEven (const int num)
{
    if (num % 2 == 0) return true;

    return false;
    
}

bool isPrime(const int num)
{
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2)
        if (num % i == 0) return false;

    return true;
}

int listOfDivisors(int list[], const int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            list[count] = i;
            count++;
        }
    }

    return count;
}