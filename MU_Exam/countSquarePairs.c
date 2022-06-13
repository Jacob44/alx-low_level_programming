#include <stdio.h>

int isPerfectSquare(int n)
{
	int i = 1; 
	int flag = 0;

	for (; i < n; i++)
	{
		if (n == (i * i))
			flag = 1;
	}
	if(flag == 1)
	{
		return (1);
	}
	return (0);
}
int countSquarePairs(int a[], int len)
{
	int i, j = 0, count = 0, sum = 0;

	if (len > 1)
	{
		for (i = 0; i < (len - 1); i++)
		{
			if (a[i] > 0)
			{
				for (j = i + 1; j < len; j++)
				{
					if(a[j] > 0)
					{
						sum = a[i] + a[j];
						if(isPerfectSquare(sum))
						{
							printf("sum: %d\n", sum);
					       		count++;
						}
					}	
				}	
			}	
		}
	}
	return (count);
}
int main (void)
{
	        int a[] = {9, 0, 2, -5, 7};
		        int b[] = {9};

			        printf("%d\n", countSquarePairs(a, 5));
				        printf("%d\n", countSquarePairs(b, 1));
}
