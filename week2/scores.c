#include <stdio.h>
#include <cs50.h>

// A program that prints out the average value of specified numbers

const int TOTAL = 3;

//Prototype
float average(int length, int array[]);

int main(void)
{
    int scores[TOTAL];

    // Prompt user to insert scores
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average is: %f.\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;

    // Sum scores in array
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    // Calculate average
    return sum / length;
}