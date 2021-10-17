#include <stdio.h>
#include <cs50.h>

// Linear search for number 0

int main(void) // main always returns an int
{
    int numbers[] = {2, 5, 8, 9, 3, 7, 0};

    for (int i = 0; i < 7; i++) 
    {
        if (numbers[i] == 0)
        {
            printf("Found\n");
            return 0; // means all went well & exits program
        }
    }
    printf("Not found\n");
    return 1; // means something went wrong & exits program
}