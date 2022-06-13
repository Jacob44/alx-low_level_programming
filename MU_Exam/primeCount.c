#include <stdio.h>

/**
 * primeCount - counts the number of prime numbers withing the boundaries.
 * @start: start number
 * @end: end number
 *
 */
int primeCount(int start, int end)
{
	int i, j, count = 0, cnt = 0;

	for(j = start; j <= end; j++)
	{
		count = 0;
		if(j > 1)
		{
			for(i = 2; i < j; i++)
			{	
				if((j % i) == 0)
					count++;
			}
			if (count == 0)
				cnt++;
		}

	}	
	return (cnt);
}
int main(void)
{
	int start[] = {10, 11, 20, 1, 5, 6, -10};
	int end[] = {30, 29, 22, 1, 5, 2, 6};

	int i = 0;

	printf("%d\n", primeCount(10, 30));
	printf("%d\n", primeCount(11, 29));
	for(; i < 7; i++)
	{
		printf("%d\n", primeCount(start[i], end[i]));
	}
}
