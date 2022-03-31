#include <stdio.h>
int prime_check(int mid, int n);

/**
 * is_prime_number - tells if n is prime.
 * @n: number to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int mid = n / 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else
		return (prime_check(mid, n));
}
/**
 * prime_check - checks the prime number
 * @mid: given number n divided by 2
 * @n: number to be checked.
 *
 * Return: 1 if it is prime, 0 otherwise.
 */
int prime_check(int mid, int n)
{
	/*printf("%d\n", mid);*/
	if (mid == 1)
		return (1);
	if (n % mid == 0)
		return (0);
	return (prime_check(mid - 1, n));
}

