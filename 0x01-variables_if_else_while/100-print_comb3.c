#include <stdio.h>

/**
* main - Print all possible combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int number;
		int numb;

		for (number = 0; number <= 9; number++)
		{
		  for (numb = number + 1; numb <= 9; numb++)
		  {
		    putchar(number + '0');
		    putchar(numb + '0');
		    if (number < 8)
		    {
		      putchar(',');
		      putchar(' ');
		    }
		  }
		}
		putchar('\n');

	return (0);
}
