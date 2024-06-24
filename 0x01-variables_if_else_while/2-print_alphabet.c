#include <stdio.h>
/**
 *main - Entry point
 *
 * Retun: Always 0 (success)
 */
int main(void)
{
	/*main code*/
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter + i);
	}
	putchar('\n');
	return (0);
}
