#include <stdio.h>

// A program that prints out a message 10 times.

// Prototype
void meow(void);

int main(void)
{
    for (int i=0; i < 10; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}