#include <stdio.h>
#include <cs50.h>

// A program that prints out a message based on user inputs.

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x > y)
    {
        printf("X is greater than Y.\n");
    }
    else if (x < y)
    {
        printf("X is less than Y.\n");
    }
    else
    {
        printf("X is equal to Y.\n");
    }
}