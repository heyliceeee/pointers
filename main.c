#include <stdio.h>
#include "ex3.c"
#include "ex4.c"

void test1(int value)
{
    value = 20;
    printf("<test1> inside value (age): %d [%p]\n", value, &value);
}

void test2(int *value)
{
    *value = 20;
    printf("<test2> inside value (age): %d [%p]\n", *value, value);
}

void printArray(int *array, int n, char *title)
{
    puts(title);

    for(int i=0; i < n; i++)
    {
        printf("    %d [%p]", array[i], &array[i]);
    }

    printf("\n");
}

void test3(int *array, int n)
{
    for(int i=0; i < n; i++)
    {
        array[i]++;
    }

    printArray(array, n, "<test3> inside value (array[i])");
}

int main()
{
    int age = 30, numbers[] = {4, 8, 2, 5}, numbersLength=4;

    test1(age);
    printf("<test1> outside value (age): %d [%p]\n\n", age, &age);

    test2(&age);
    printf("<test2> outside value (age): %d [%p]\n\n", age, &age);

    test3(numbers, numbersLength);
    printArray(numbers, numbersLength, "<test3> outside value (numbers):");


    //another exercises
    ex3();
    ex4();

    return 0;
}
