#include "main.h"

/**
 *_isupper - Checks if a character is uppercase
 *@c: The character to be checked
 *Return: 1 if upper case and 0 if not
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
