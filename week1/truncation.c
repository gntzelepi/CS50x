#include <stdio.h>
#include <cs50.h>

// A program that divides two numbers.

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    float z = (float) x / (float) y;

    printf("Result is %f.\n", z);
}