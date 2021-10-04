#include <cs50.h>
#include <stdio.h>

// A program that prompts the user to agree or disagree.

int main(void)
{
    char c = get_char("Do you agree? ('y/Y' or 'n/N') ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Wrong answer.\n");
    }
}