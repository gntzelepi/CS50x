#include <stdio.h>
#include <cs50.h>

int steps = 0;

int collatz(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    // even nums
    else if (n % 2 == 0)
    {
        steps++;
        return collatz(n / 2);
    }
    // odd nums
    else
    {
        steps++;
        return collatz(3 * n + 1);
    }
}

int main(void)
{
    int n;
    n = get_int("Insert int: ");

    collatz(n);

    printf("steps = %d\n", steps);
}