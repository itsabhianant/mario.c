// Including some libraries
#include <cs50.h>
#include <stdio.h>

// Prompts the user to give a valid output
int valid_input(void);

int main(void)
{
    // Getting the valid input
    int height = valid_input();

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







int valid_input(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}