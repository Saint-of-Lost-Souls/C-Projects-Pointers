#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    
    int x[] = {9, 8, 7, 6, 5};

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("x[i]: %d\n", x[i]);
    }
    
    /* Let's recall:
    - an array is an ordered collection of items of the same type
    - a pointer holds the address of other data
    Can we access the elements of an array through pointers? */

    printf("Access an element of x through pointer: \n");
    int *p = &x[2]; // Assign the pointer the address of the 2nd element in the array

    printf("x[2]: %d, *p: %d\n", x[2], *p);

    *p = 0; // Dereferencing the pointer

    printf("x[2]: %d, *p: %d\n", x[2], *p); // Reset the 2nd element to 0

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) // 
    {
        printf("x[i]: %d\n", x[i]);
    }

    printf("Array address:\n");
    printf("&x[0]: %llX\n", (uint64_t)&x[0]);
    printf("x:     %llX\n\n", (uint64_t)x);

    /* int *alias = x;
    int *alias = &x[0];  */

    p = x;

    printf("Display x through the pointer:\n");
    printf("------------------------------\n");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) // 
    {
        printf("i: %d | x[i]: %d | p[i]: %d\n", i, x[i], p[i]);
    }
    printf("\n");

    printf("Set x to 0, 1, 2, 3, 4 through the pointer:\n");
    printf("-------------------------------------------\n");

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) // 
    {
        p[i] = i;
        printf("i: %d | x[i]: %d | p[i]: %d\n", i, x[i], p[i]);

    }
    printf("\n\n");
    return EXIT_SUCCESS;
}
