#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabets in reverse
 *
 * Retunr: Always (0) Success *
 */
int main(void)
{
	char s;
	
	for (s = 'z'; s >= 'a'; s--)
	putchar(s);
	
	putchar('\n');

return (0);
}

