// Including some libraries
#include <cs50.h>
#include <stdio.h>

// Prompts the user to give a valid output
int valid_input(const int from, const int to);

int main(void)
{
    const int from = 1;
    const int to = 8;

    // Getting the valid input
    int height = valid_input(from, to);

    // Making the pyramid and printing it
    for (int i = 0; i < height; i ++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}







int valid_input(const int from, const int to)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < from || n > to);
    return n;
}