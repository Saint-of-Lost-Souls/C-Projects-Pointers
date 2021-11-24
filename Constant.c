#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    // const int data = 123 can no longer be changed by the program

    printf("--------------------------------Constants---------------------------------|\n");
    printf("---CONSTANT POINTERS---|--POINTERS TO CONSTANTS--|--EVERYTHING CONSTANT!--|\n"); 
    printf("--------------------------------------------------------------------------|\n");
    printf(" int *const my_ptr =   |   const int*my_ptr=     | const int *const       |\n");
    printf("    &some_data;        |     &someData;          | my_ptr = &someData;    |\n");
    printf("--------------------------------------------------------------------------|\n");
    printf(" The address stored    | The value pointed to    | Neither the pointer nor|\n");  
    printf(" in the pointer        |  must not be changed by | the value it points to |\n");
    printf(" cannot be changed     |      the pointer        | can be changed         |\n");
    printf("--------------------------------------------------------------------------|\n");
    return EXIT_SUCCESS;

    printf("\n\n");
    return EXIT_SUCCESS;
}
