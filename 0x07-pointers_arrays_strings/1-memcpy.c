#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: points to the destination memory
 * @src: points to the source memory
 * @n: the number of bytes *
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
