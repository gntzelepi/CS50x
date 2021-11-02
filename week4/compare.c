#include <cs50.h>
#include <stdio.h>
#include <string.h>

// A program that compares two strings
// A string is a pointer to the address of the first character of the string

int main(void)
{
    char *s = get_string("Enter a string: ");
    char *t = get_string("Enter a string: ");

    if (strcmp(s,t) == 0)
    {
        printf("Same strings.\n");
    }
    else
    {
        printf("Different strings.\n");
    }
}