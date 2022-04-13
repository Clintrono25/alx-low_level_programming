#include "3-calc.h"
/**
 * op_add - adds two int
 * @a: number 1
 * @b: number 2
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - finds the diff btw  two int
 * @a: number 1
 * @b: number 2
 * Return: diff of a and b
 */
int op_add(int a, int b)
{
        return (a - b);
}
/**
 * op_mul - product of  two int
 * @a: number 1
 * @b: number 2
 * Return: resulst of multiplication
 */
int op_add(int a, int b)
{
        return (a * b);
}
/**
 * op_div - divides two int
 * @a: number 1
 * @b: number 2
 * Return: result of division 
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - calculates mod of two ints
 * @a: number 1
 * @b: number 2
 * Return: mod of 1, 2
 **/
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
