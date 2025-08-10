#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[3] = {0};
	for (int i = 0; i < 3; i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for (int q = 1; q < 3; q++)
	{
		if (arr[q] > max)
		{
			max = arr[q];
		}
	}printf("%d\n",max);
	return 0;
}