//
// Created by Alice Dias on 11/30/2023.
//

#include <stdio.h>

int len(char *str)
{
    int i=0;

    while (*str != '\0')
    {
        i++;
        str++;
    }

    return i;
}


int ex5()
{
    char myString[] = "Hello World!";

    printf("%d characters", len(myString));

    return 0;
}