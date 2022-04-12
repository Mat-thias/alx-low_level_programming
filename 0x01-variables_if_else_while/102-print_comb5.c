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
  int num;
  int n;

  for (number = 0; number <= 9; number++)
  {
    for (numb = 0; numb <= 9; numb++)
    {
      for (num = 0; num <= 9; num++)
      {
        for (n = 0; n <= 9; n++)
        {
	  if (number != num && numb != n)
	  {
            putchar(number + '0');
	    putchar(numb + '0');
	    putchar(' ');
	    putchar(num + '0');
	    putchar(n + '0');
	  }
	  
	  if (!(number == 9 && numb == 9 && num == 9 && n == 9))
	  {
	    putchar(',');
	    putchar(' ');
	  }
	}
      }
    }
  }
  putchar('\n');

  return (0);
}
