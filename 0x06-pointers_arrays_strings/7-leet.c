#include "main.h"

/**
 * leet - encodes a string to 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: the pointer to string
 * Return: pointer to s
 */

char *leet(char *s)
{
	int str_length, leet_count;
	char leet_letter[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	str_length = 0;
	while (s[str_length] != '\0')
	{
		leet_count = 0;
		while (leet_count < 10)
		{
			if (leet_letter[leet_count] == s[str_length])
		{
			s[str_length] = leet_numbers[leet_count];
		}
			leet_count++;
		}
		str_length++;
	}
	return (s);
}
