#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int first = '0';
	int sec = '0';
	int third = '0';

	for (third = '0'; third <= '9'; third++)
	{
		for (sec = '0'; sec <= 9; sec++)
		{
			for (first = '0'; first <= '9'; first++)
			{
				if (!(first == sec) || (sec == third) || (sec > first) || (third > sec))
				{
					putchar(third);
					putchar(sec);
					putchar(first);
					if (!(first == '9' && third == '7' && sec == '8'))
					{
						putchar(',');
						putchar(' ');			
					}
				}
			}
		}
		putchar ('\n');
	}
	return (0);
}
