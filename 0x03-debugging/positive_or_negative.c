#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - This is the main function
 * description - This function determines if a number is negativr or positive
 *
 * Return: This should return 0
*/
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%i is positive\n", i);
	} else if (i == 0)
	{
		printf("%i is zero\n", i);
	} else
	{
		printf("%i is negative\n", i);
	}
}
