#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    while (1) {
        int n;
        printf("1.+ 2.- 3.* 4./ 5.退出\n");
        scanf("%d", &n);

        switch (n) {
        case 1: {
            printf("请输入两个整数：");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("结果：%d\n", a + b);
            break;
        }
        case 2: {
            printf("请输入两个整数：");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("结果：%d\n", a - b);
            break;
        }
        case 3: {
            printf("请输入两个整数：");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("结果：%d\n", a * b);
            break;
        }
        case 4: {
            printf("请输入两个整数：");
            int a, b;
            scanf("%d %d", &a, &b);
            while (b == 0) {
                printf("除数不能为0，请重新输入除数：\n");
                scanf("%d", &b);
            }
            printf("%.2f\n",(double)a/b);
            break;
        }
        case 5:
            return 0;
        default:
            printf("无效选择\n");
        }
    }
}
