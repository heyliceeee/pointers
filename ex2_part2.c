//
// Created by Alice Dias on 11/30/2023.
//

#include <stdio.h>
#include "ex2_part2.h"


void printFirst(char *str, int n)
{
    for(int i=0; *str != '\0' && i < n; i++)
    {
        printf("%c", *str);
        str++;
    }
}

int ex2_part2()
{
    char myString[] = "Hello World!";
    int n = 7;

    printFirst(myString, n);

    return 0;
}