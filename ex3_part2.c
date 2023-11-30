//
// Created by Alice Dias on 11/30/2023.
//

#include <stdio.h>
#include "ex3_part2.h"

char *strchar(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return str;
        }

        str++;
    }

    return NULL;
}


int ex3_part2()
{
    char myString[] = "Hello World";
    char *result = *strchar(myString, 'l');

    printf("%ld", result - myString);

    return 0;
}