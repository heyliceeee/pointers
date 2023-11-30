//
// Created by Alice Dias on 11/30/2023.
//
#include "stdio.h"
#include "ex1_part2.h"

int equal(char *str1, char *str2)
{
    int result=0;

    for(int i=0; *str1 != '\0'; i++)
    {
        for(int j=0; *str2 != '\0'; j++)
        {
            if(*str1 == *str2)
            {
               str1++;
               str2++;

                result = 1;

            } else
            {
                return 0;
            }
        }
    }

    return result;
}

int ex1_part2()
{
    char myString1[] = "Hello", myString2[] = "World";

    printf("%d", equal(myString1, myString2));

    return 0;
}
