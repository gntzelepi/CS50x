#include <stdio.h>
#include <cs50.h>

// A program that prints out a message, a specified number of times.

void meow(void);

int main(void)
{
    meow();
}

void meow(void)
{
    int n = get_int("How many times should I meow? ");
    if (n > 20)
    {
        printf("That's too many meows! Anyways...\n");
    }
    for (int i = 1; i < n+1; i++)
    {
        printf("Meow %i\n", i);
    }
}