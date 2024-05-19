#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
        i++;
    }


    // continue
    int j = 1; // Initialize j to 1

    while (j <= 10)
    {
        if (j == 5)
        {
            j++;      // Increment j before continue to avoid infinite loop
            continue; // Skip the rest of the loop when j is 5
        }
        printf("%d\n", j);
        j++;
    }

    return (0);
}