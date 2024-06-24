#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{	
	int first_digit = '0';
	int sec_digit = '0';
	
	while(first_digit <= '9')
	{
		while(sec_digit <= '9')
		{
			if (!(first_digit > sec_digit) || first_digit == sec_digit )
			{
				putchar(first_digit);
				putchar(sec_digit);
				if (first_digit == '8' && sec_digit == '9')
					{
						putchar('\n');	
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
			}
			sec_digit++;
		}
		sec_digit = '0';
		first_digit++;
	}
return (0);
}
