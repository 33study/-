#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct operation {
	char name[20];
	char symbol;
};
int main()
{  
	struct operation ops[20] = { {"�ӷ�",'+'},{"����",'-'},{"�˷�",'*'},{"����",'/'} };
	int opscount = 4;
	while (1) {
		for (int i = 0; i < opscount; i++)
		{
			printf("%d.%s\n", i + 1, ops[i].name);
		}printf("%d.��ӹ���  %d.�˳�\n", opscount + 1, opscount + 2);
		int choice;
		if (scanf("%d", &choice) != 1)
		{
			printf("��Чѡ��\n");
			while (getchar() != '\n');
			continue;
		}
		else if (choice == opscount + 2) return 0;
		else if (choice == opscount + 1)
		{
			if (opscount >= 20)
			{
				printf("����������");
				break;
			}
			else
			{
				printf("�����빦�����ƣ�\n");
				scanf("%s", ops[opscount].name);
				printf("�������������\n");
				scanf(" %c", &ops[opscount].symbol);
				opscount++;
				printf("��ӳɹ���");
				continue;
			}
		}
		if (choice<1 || choice>opscount)
		{
			printf("��Чѡ��");
			continue;
		}
		printf("����������������\n");
		int a, b;
		 while ( scanf("%d %d",&a, &b) != 2)
			{
				printf("��������������������");
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
					printf("��������Ϊ0������������һ��������");
					scanf("%d",&b);
					
				}
				printf("%.2f\n", (double)a / b); break;
			}
			case '%': printf("%d\n", a % b); break;           // ȡ��
			case '^': {
				int result = 1;
				for (int i = 0; i < b; i++) result *= a;
				printf("%d\n", result);
			}   break;             // ������
			case '&': printf("%d\n", a & b); break;           // λ��
			case '|': printf("%d\n", a | b); break;           // λ��
			case 'm': printf("%d\n", a > b ? a : b); break;   // ���ֵ
			case 'n': printf("%d\n", a < b ? a : b); break;   // ��Сֵ
			default: printf("�ݲ�֧�ִ����㣡\n"); break;
			}
	}
	return 0;
}