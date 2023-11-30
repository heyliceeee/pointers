//
// Created by Alice Dias on 11/29/2023.
//
#include <stdio.h>
#include "ex4.h"

#define MININT 0
#define MAXINT 999

void sort(int *v1, int *v2, int *v3)
{
    int min = MAXINT;
    int max = MININT;
    int mid = 0;


    if(*v1 < min && *v1 < *v2 && *v1 < *v3)
    {
        min = *v1;

        if(*v2 < *v3)
        {
            mid = *v2;
            max = *v3;

        } else {
            mid = *v3;
            max = *v2;
        }

    } else if(*v2 < min && *v2 < *v1 && *v2 < *v3)
    {
        min = *v2;

        if(*v1 < *v3)
        {
            mid = *v1;
            max = *v3;

        } else {
            mid = *v3;
            max = *v1;
        }

    } else if(*v3 < min && *v3 < *v1 && *v3 < *v2)
    {
        min = *v3;

        if(*v1 < *v2)
        {
            mid = *v1;
            max = *v2;

        } else {
            mid = *v2;
            max = *v1;
        }
    }

    *v1 = min;
    *v2 = mid;
    *v3 = max;
}


int ex4()
{
    int v1=1, v2=3, v3=2;

    sort(&v1, &v2, &v3);

    printf("%d > %d > %d\n", v1, v2, v3);

    return 0;
}