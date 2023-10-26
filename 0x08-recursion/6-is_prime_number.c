#include "main.h"
int is_divisable(int n, int divisor);
/**
 * is_divisable - function to check if a number is divisable
 * @n: argument
 * @divisor: argument
 * Return: return 1 is n is divisable or 0 otherwise
 */
int is_divisable(int n, int divisor)
{
	if (divisor == n / 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_divisable(n, divisor + 1));
}
/**
 * is_prime_number - function to check if number is prime
 * @n: argument
 * Return: returns 1 is prime or 0 otherwise
 */
int  is_prime_number(int n)
{
	int divisor = 2;
	
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisable(n, divisor));
}
