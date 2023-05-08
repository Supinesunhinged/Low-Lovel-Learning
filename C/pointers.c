#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old\n", *pAge);
}

int main(void) {

    // Pointer = a "variable-like" reference that holds a memory address to another variable, and
    //          some tasks are preformed more easily with pointers
    //          * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d\n", sizeof(age));
    printf("size of pAge: %d\n", sizeof(pAge));


    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);

    printAge(pAge);
}