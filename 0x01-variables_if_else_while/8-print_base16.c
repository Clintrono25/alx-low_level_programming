#include <stdio.h>

/**
 * main - Entry point
 *
 * Print base 16 in lowercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int digit;
	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);
	
	for (digit = 'a'; digit <= 'f'; digit++)
	putchar(digit);
	
	putchar('\n');

return (0);	
}
