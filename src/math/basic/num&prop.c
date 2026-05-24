#include <stdbool.h>
#include <stdio.h>

#include "math/basic/arithmetic.h"
#include "math/basic/num&prop.h"

#define MAX_CHAR 20

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

int numberOfDivisors(const int num)
{
    int count = 1;
    for (int i = 1; i < num / 2 + 1; i++)
    {
        if (num % i == 0)
            count++;
    }

    return count;
}

int sumOfDigits(int num)
{
    int sum = 0;
    
    if (num < 0)
        num *= -1;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int reverseOfNumber(const int num)
{
    int copyNum = num;

    if (num < 0)
        copyNum *= -1;
    
    int reverse = 0;
    while (copyNum > 0)
    {
        int rest = copyNum % 10;
        reverse = reverse * 10 + rest;
        copyNum /= 10;
    }

    if (num < 0)
        reverse *= -1;

    return reverse;
}
