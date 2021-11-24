#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    /* int *ptr_1; // declaring what type of data the pointer is pointing to
    char *ptr_2;
    float *ptr_3;

    int *ptr_4 = NULL;

    int *ptr_5 = &data; // variable should be the same data type
    // Explicit casting
    int *ptr_6 = (int*) &data; // converting data into an int if it isn't

    void * ptr_7 = &data; // void can point to any data type
 */
    // Indirection: A pointer that provides an indirect means of accessing the value of a particular data item

    int apples = 12;
    int *ptr = &apples;
    // Indirection to GET apples value

    int num_1 = *ptr;     // num_1 = 12
    int num_2 = *ptr + 8; // num_2 = 20

    // Indirection to SET apples value

    *ptr = 99; // apples = 99
    (*ptr)++;  // apples = 100

    // Indirection and void pointers

    int apples = 12;
    void *ptr = &apples;

    // You cannot dereference a void pointer. The compiler has no idea that apples is an int.
    // You must cast a void pointer before indirection

    int num_1 = *((int*)ptr); // num_1 = 12

    printf("\n\n");
    return EXIT_SUCCESS;
}
