#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    int *ptr = NULL; // Pointing to an invalid address in memory

    // Execute only if ptr isn't 0
    if(ptr) // if(ptr != NULL)
    {
    printf("1 | Pointed value: %d\n", *ptr); // Cause the program to crash because it is pointing to an invalid address in memory, SEGMENTATION ERROR
    }
    int someValue = 123;

    // Execute only if ptr is 0
    if(!ptr) // if(ptr == NULL)
    {
        ptr = &someValue;
    }
    if(ptr) // if(ptr != NULL)
    {
    printf("2 | Pointed value: %d\n", *ptr); 
    }

    printf("\n\n");
    return EXIT_SUCCESS;
}
