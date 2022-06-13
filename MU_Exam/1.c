#include <stdio.h>

/**
 * isPerfectSquare - returns the next perfect square
 * @n: the integer
 *
 * Return: the next perfect square.
 */
int isPerfectSquare(int n)
{
	int i = 1, j = n + 1;

	if (n == 0)
		return (1);
	
	while (j > 1)  
	{
		for (i = 1; i < (j); i++)
		{
			if (j == (i*i))
				return (j);
		}
		j++;
	}
	return (0);
}
int main (void)
{
	printf("%d\n", isPerfectSquare(6));
	printf("%d\n", isPerfectSquare(36));
	printf("%d\n", isPerfectSquare(0));
	printf("%d\n", isPerfectSquare(-5));
	printf("%d\n", isPerfectSquare(1));
}
