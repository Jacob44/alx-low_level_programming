#include <stdio.h>

int isInertial(int a[ ], int len)
{
	int i, j, ocount = 0;
	int max = a[0];

	for (i = 0; i < len; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	if (max % 2 != 0)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (a[i] % 2 != 0)
		{
			ocount++;
			for(j = 0; j < len; j++)
			{
				if ((a[j] % 2 == 0) && (a[j] != max))
				{
					if (a[j] > a[i])
						return (0);
				}
			}
		}
	}
	if (ocount == 0)
		return (0);
	return (1);
}
int main (void)
{
	int a[] = {1};
	int b[] = {2};
	int c[] = {1, 2, 3, 4};
	int d[] = {1, 1, 1, 1, 1, 1, 2};
	int k[] = {2, 12, 4, 6, 8, 11};
	int e[] = {2, 12, 12, 4, 6, 8, 11};
	int f[] = {-2, -4, -6, -8, -11};
	int h[] = {2, 3, 5, 7};
	int j[] = {2, 4, 6, 8, 10};

	printf("%d\n", isInertial(a, 1));
	printf("%d\n", isInertial(b, 1));
	printf("%d\n", isInertial(c, 4));
	printf("%d\n", isInertial(d, 7));
	printf("%d\n", isInertial(k, 6));
	printf("%d\n", isInertial(e, 7));
	printf("%d\n", isInertial(f, 5));
	printf("%d\n", isInertial(h, 4));
	printf("%d\n", isInertial(j, 5));

}
