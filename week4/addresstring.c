#include <stdio.h>
#include <string.h>

// A program that prints out the address of each character in a string

int main(void)
{
    char *s = "HI!";

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%p\n", &(s[i]));
    }
}