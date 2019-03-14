#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds two ints
 * @a: int to add
 * @b: int to add
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two ints
 * @a: int to sub
 * @b: int to sub
 *
 * Return: the diffrence
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints
 * @a: int to mul
 * @b: int to mul
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: int to divide
 * @b: int to divide
 *
 * Return: the value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mods two ints
 * @a: int to mod
 * @b: int to mod
 *
 * Return: the value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
