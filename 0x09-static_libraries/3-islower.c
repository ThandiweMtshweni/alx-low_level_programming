/**
 * _islower - Checking lower case characters
 * @c: The character to be checked
 * Return: 1 for lowercase and 0 for upper case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
