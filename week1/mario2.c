#include <stdio.h>
#include <cs50.h>

//  A program that prints out a grid of hashes

int main(void)
{
    // Ask user for a number
    int n;
    do
    {
        n = get_int("Insert number: ");
    } 
    while (n < 1);

    // Print out grid of dimensions n x n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}