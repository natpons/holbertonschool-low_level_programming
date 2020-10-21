#include "3-calc.h"

/**
 * op_add - addition function 
 * @a: first term
 * @b: second term
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first term
 * @b: second term
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * a: first term
 * b: second term
 *
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * a: first term
 * b: second term
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - division function
  * a: first term
  * b: second term
  *
  * Return: the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
