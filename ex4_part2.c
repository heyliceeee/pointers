//
// Created by Alice Dias on 11/30/2023.
//

#include <stdio.h>
#include "ex4_part2.h"


int *findMax(int data[], int size)
{
    if(size <= 0)
    {
        return NULL;
    }

    int *maxElement = &data[0];

    for(int i=1; i < size; i++)
    {
        if(data[i] > *maxElement)
        {
            maxElement = &data[i];
        }
    }

    return maxElement;
}


int ex4_part2()
{
    int numbers[] = {8, 2, 0, 0, 1, 1, 9};
    int size = 7;

    int *maxPtr = *findMax(numbers, size);

    if (maxPtr != NULL)
    {
        printf("The maximum element is %d at index %ld\n", maxPtr, maxPtr - numbers);
    }
    else
    {
        printf("Array is empty or invalid size.\n");
    }

    return 0;
}