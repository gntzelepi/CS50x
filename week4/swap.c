#include <stdio.h>

// A program that swaps two integers using pointers

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    // pass in address of x and y
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

// swap addresses of integers
void swap(int *a, int *b)
{
    int temp = *a; // store in temp whatever is at the address
    *a = *b; // change what is at the location in a, to be what is at the location in b
    *b = temp; // go to where b points to, and change that to be the value of temp
}