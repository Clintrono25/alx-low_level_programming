#include <stdio.h>
/**
 * main - Entry point
 *
 * print all letter except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lttr;

	for (lttr = 'a'; lttr <= 'z'; lttr++)
	{
		if (lttr != 'e' && lttr != 'q')
			putchar(lttr);
	}
	putchar('\n);

return (0);
}
