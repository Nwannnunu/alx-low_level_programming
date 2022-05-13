#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function to add two integer
 * @a: int type
 * @b: int type
 * Return: sum of two int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two integers
 * @a: int type
 * @b: int type
 * Return: subtract two int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two integer
 * @a: int type
 * @b: int type
 * Return: product of two int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funtion to divide two int
 * @a: int type
 * @b: int type
 * Return: divide two int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two int
 * @a: int type
 * @b: int type
 * Return: modulus of two int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
