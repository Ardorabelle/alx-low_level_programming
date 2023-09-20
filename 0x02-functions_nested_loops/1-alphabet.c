#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 *Return: void
*/
void print_alphabet(void)
{
  char a = (96);
  int i = 1;
  while(a < (122))
    {
      a = a + i;
      _putchar(a);
    }
  _putchar(10);
}
