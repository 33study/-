#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	while (1) {
		int choice, a, b;
		printf("1.+ 2.- 3.* 4./ 5.退出 \n");
		if (scanf("%d", &choice) != 1)
		{
			printf("输入错误！请输入数字：\n");
			while (getchar() != '\n');
			continue;
		}
		if (choice == 5)return 0;
		if (choice < 1 || choice>4)
		{
			printf("无效选择\n");
			continue;
		}
		printf("请输入两个整数：");
		scanf("%d %d ", &a, &b);
		switch (choice)
		{
		case 1:printf("%d\n", a + b); break;
		case 2:printf("%d\n", a - b); break;
		case 3:printf("%d\n", a * b); break;
		case 4: {
			while (b == 0)
			{
				printf("输入错误！请重新输入：\n");
				scanf("%d", &b);
			}
			printf("%.2f\n", (double)a / b); break;
		}
		}
	}
	return 0;
}