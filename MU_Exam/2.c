#include <stdio.h>

/**
 *
 */
int nUpCount(int a[], int len, int n)
{
	int i = 0;
	int psum = 0, cnt = 0, prev = 0;

	for (; i < len; i++)
	{
		psum += a[i];
		if (psum > n && prev <= n)
		{
			cnt++;
		}
		prev = psum;
	}
	return (cnt);
}
int main (void)
{
	int x[] = {2, 3, 1, -6, 8, -3, -1, 2};
	int y[] = {6, 3, 1};
	int z[] = {1, 2, -1, 5, 3, 2, -3};

	int a1 = nUpCount(x, 8, 5);
	int a2 = nUpCount(y, 3, 6);
	int a3 = nUpCount(z, 7, 20);

	printf("x: %d\n", a1);
	printf("y: %d\n", a2);
	printf("z: %d\n", a3);
}
