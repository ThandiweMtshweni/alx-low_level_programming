#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point to generate random valid passwords
 * Return: Always 0
 */

int main(void)
{
	char password[84];
	int i, sum, x, y;
	i = 0;
	sum = 0;

	srand(time(0));
	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password[i] = '\0';
	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;
		for ( i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + x))
			{
				password[i] -= x;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + y))
			{
				password[i] -= y;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
