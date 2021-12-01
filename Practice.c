#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int *ptr = str; (no &, if u want it to point to the value
    int *ptr = &str; (point to memory address)
    
    int age = 37;
    int* pAge = &age;
    double pi = 3.14;
    double* pPi = &pi;
    char name = 'S';
    char* pName = &name;
    
    printf("age's memory address: %d\n", *pAge); // This is dereferencing a pointer. 
                                                 // The (pAge pointer) goes to the address, 
                                                 // *pAge gets the information stored there
    printf("pi's memory address: %p\n", pPi);
    printf("name's memory address: %p\n", pName);

    printf("\n");
/* 
    char a = 'A';
    char *ptr = &a;
    // One byte apart, chars only take 1 byte

    printf("1 | %c, %c, %llu\n", a, *ptr, (uint64_t)ptr); // address of the a variable

    char b = 'B';
    ptr = &b;
    printf("2 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr); // address of the b variable

    *ptr = 'C';
    printf("3 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr); // Increasing b variable without changing the ptr's address

    (*ptr)++; // incrementing the value the ptr is pointing to
    printf("4 | %c, %c, %llu\n", b, *ptr, (uint64_t)ptr); // Increasing b variable without changing the ptr's address

    printf("I used to be a B, but I lost my belt so now my gut hangs out %c\n", b);

    unsigned x = 'A';
    ptr = (char*)&x; // char pointer to unsigned, requires explicit casting

    printf("5 | %u, %c, %llu\n", x, *ptr, (uint64_t)&x); // print x variables address

    unsigned y = 'B';
    ptr = (char*)&y;
    printf("6 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y); // print y variables address


    *ptr = 'C';
    printf("7 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y); 

    (*ptr)++; 
    printf("8 | %u, %c, %llu\n", y, *ptr, (uint64_t)&y);

    x = 0xABCD1234;
    ptr = (char*)&x;
    printf("9 | %X, %X, %c\n", x, *ptr, *ptr);
 */    printf("\n\n");
    return EXIT_SUCCESS;
}
