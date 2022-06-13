#include <stdio.h>

/**
 * centerarray - a function that checks if an array is centered
 * @intarray: the array to be checked.
 *
 * Return: 1 if it is centered or 0 otherwise.
 */
int centerarray(int *intarray)
{
	int i, mid;
	int len = sizeof(intarray);

	if(len % 2 == 0)
	{
		printf("the array length should be even. please try again");
		return (0);
	}
	mid = len/2;
	for(i = 0; i < len; i++)
	{
		if(i != mid)
		{
			if(intarray[i] <= intarray[mid])
				return (0);
		}
	}
	return (1);
}
int main(void)
{
	int *array1;
	int is_center;

	array1 = {1, 2, 3, 4, 5};
	is_center = centerarray(array1);
	if(is_center)
		printf("it is centered");
	else
		printf("not centered");

}
