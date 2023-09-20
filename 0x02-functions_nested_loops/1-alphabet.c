#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 *Return: void
*/
void print_alphabet(void)
{
	char a = (96);
	int i = 1;

	/*condition to print only lowercase*/
	while (a < (122))
	{
		a = a + i;
		_putchar(a);/*print alphabet one by one*/
	}
	_putchar(10);
}
