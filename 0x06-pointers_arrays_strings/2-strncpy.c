/**
 * *_strncpy - copies the string
 * @dest: the destination string pointer
 * @src: the source pointer
 * @n: the number of bytes to be used
 *
 * Return: The pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
