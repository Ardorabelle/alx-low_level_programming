#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - This is the main function
 * description - This function determines if a number is negativr or positive
 *
 * Return : 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n == 0)
	{
		printf("%i is zero\n", n);
	} else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
