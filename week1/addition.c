#include <stdio.h>
#include <cs50.h>

// A program that adds two numbers.

int main(void)
{
    long x = get_long("X: ");
    long y = get_long("Y: ");

    printf("Result is %li.\n", x + y);
}