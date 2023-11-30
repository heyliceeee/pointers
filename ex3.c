//
// Created by Alice Dias on 11/29/2023.
//
#include <stdio.h>
#include "ex3.h"

#define MAXINT 999
#define MININT 0


int getNumber(int min, int max, char question[])
{
    int num;

    do
    {
        printf("%s", question);
        scanf("%d", &num);

    } while (num < min || num > max);

    return num;
}

void sum(int num1, int num2, long *result)
{
    *result = (long) (num1 + num2);
}


int ex3()
{
    int value1, value2;
    long result;

    value1 = getNumber(MININT, MAXINT, "enter one value: ");
    value2 = getNumber(MININT, MAXINT, "enter another value: ");

    sum(value1, value2, &result);

    printf("sum: %ld\n", result);


    return 0;
}