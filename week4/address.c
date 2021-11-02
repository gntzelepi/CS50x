#include <stdio.h>

// A program that prints out the address of a variable stored in a pointer

int main(void)
{
    int n = 50;

    // store address of n in pointer p
    int *p = &n;

    printf("%p\n", p);
}