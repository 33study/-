#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct operation {
	char name[20];
	char symbol;
};
int main()
{  
	struct operation ops[20] = { {"加法",'+'},{"减法",'-'},{"乘法",'*'},{"除法",'/'} };
	int opscount = 4;
	while (1) {
		for (int i = 0; i < opscount; i++)
		{
			printf("%d.%s\n", i + 1, ops[i].name);
		}printf("%d.添加功能  %d.退出\n", opscount + 1, opscount + 2);
		int choice;
		if (scanf("%d", &choice) != 1)
		{
			printf("无效选择\n");
			while (getchar() != '\n');
			continue;
		}
		else if (choice == opscount + 2) return 0;
		else if (choice == opscount + 1)
		{
			if (opscount >= 20)
			{
				printf("功能已满！");
				break;
			}
			else
			{
				printf("请输入功能名称：\n");
				scanf("%s", ops[opscount].name);
				printf("请输入运算符：\n");
				scanf(" %c", &ops[opscount].symbol);
				opscount++;
				printf("添加成功！");
				continue;
			}
		}
		if (choice<1 || choice>opscount)
		{
			printf("无效选择！");
			continue;
		}
		printf("请输入两个整数：\n");
		int a, b;
		 while ( scanf("%d %d",&a, &b) != 2)
			{
				printf("请重新输入两个整数：");
				while (getchar() != '\n');
			}
			char op = ops[choice - 1].symbol;
			switch (op)
			{
			case '+':printf("%d\n", a + b); break;
			case '-':printf("%d\n", a - b); break;
			case '*':printf("%d\n", a * b); break;
			case '/':
			{
				while (b == 0)
				{
					printf("除数不能为0！请重新输入一个除数：");
					scanf("%d",&b);
					
				}
				printf("%.2f\n", (double)a / b); break;
			}
			case '%': printf("%d\n", a % b); break;           // 取余
			case '^': {
				int result = 1;
				for (int i = 0; i < b; i++) result *= a;
				printf("%d\n", result);
			}   break;             // 幂运算
			case '&': printf("%d\n", a & b); break;           // 位与
			case '|': printf("%d\n", a | b); break;           // 位或
			case 'm': printf("%d\n", a > b ? a : b); break;   // 最大值
			case 'n': printf("%d\n", a < b ? a : b); break;   // 最小值
			default: printf("暂不支持此运算！\n"); break;
			}
	}
	return 0;
}