#include <stdio.h>
#include <cs50.h>

// A program that prompts user to insert a number & prints out that many question marks

int main(void)
{
    // Get positive integer for width
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);
    
    // Print out that many question marks 
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}