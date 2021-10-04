#include <cs50.h>
#include <stdio.h>

// A program that determines how long it takes for a population to reach a particular size
// Background: If we have a population of (n) llamas, each year (n / 3) new llamas are born & (n / 4) llamas pass away

int main(void)
{
    int start, end, tot_time, births, deaths;

    // Prompt user for start size
    do
    {
        start = get_int("Enter start size: ");
    }
    while (start < 9);

    // Prompt user for end size
    do
    {
        end = get_int("Enter end size: ");
    }
    while (start > end);

    // Calculate number of years until we reach threshold
    for (tot_time = 0; start < end; tot_time++)
    {
        births = start / 3;
        deaths = start / 4;
        start = start + births - deaths;
    }

    // Print number of years
    printf("Years: %i\n", tot_time);
}