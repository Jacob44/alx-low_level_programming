#include <stdio.h>
int _sqrt_search(int min, int max, int n);
int _perfect_square(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (_perfect_square(n))
		return (_sqrt_search(0, n, n));
	else
		return (-1);
}
/**
 * _sqrt_search - calculate sqrt
 * @min: minimum nmbr
 * @max: maximum nmbr
 * @n: the number to be sqare rooted.
 *
 * Return: square root.
 */
int _sqrt_search(int min, int max, int n)
{
	int mid;
	/*float mid2;*/

	if (min <= max)
	{
		mid = (min + max) / 2;
		/*mid2 = (min + max) / 2;*/
		if (((mid * mid) <= n) && ((mid + 1) * (mid + 1) > n))
			return (mid);
		else if (mid * mid < n)
			return (_sqrt_search(mid + 1, max, n));
		else
			return (_sqrt_search(min, mid - 1, n));
	}
	return (min);
}
/**
 * _perfect_square - perfect square checker.
 * @n: number
 *
 * Return: 1 if it is a perfect sqare or 0 if not.
 */
int _perfect_square(int n)
{
	int mod1, mod2;
	int l2dig;
	int div1;

	mod1 = n % 10;
	div1 = n / 10;
	mod2 = div1 % 10;
	l2dig = mod2 * 10 + mod1;
	if (mod1 == 0 || ((mod1 == 1 || mod1 == 9) &&
				(mod2 % 2 == 0)) || ((mod1 == 4 || mod1 == 6) &&
					(l2dig % 4 == 0)) || (mod1 == 5 && mod2 == 2))
		return (1);
	return (0);
}
