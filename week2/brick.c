#include <cs50.h>
#include <stdio.h>

// A program that prints out ASCII codes of chars

int main(void)
{
    char c = get_char("Insert character: ");

    printf("ASCII Code for '%c' is %i.\n", c, c);
}