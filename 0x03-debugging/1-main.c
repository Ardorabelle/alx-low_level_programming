#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
        /*this condition causes an infinite loop because i < 10 is always true*/
        /*while (i < 10)
        {
                putchar(i);
        }*/

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
