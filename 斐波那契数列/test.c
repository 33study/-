#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0; 
	int b = 1;
	int set=0;
	int fib;
	scanf("%d", &set);
	if (set == 1||set==2)
		printf("%d", b);
	else
	{
		for (int i = 2; i <= set; i++)
		{
			fib = a + b;
			a = b;
			b = fib;


		}
		printf("%d\n",b);
	}

	return 0;
}//µÚnÏî

