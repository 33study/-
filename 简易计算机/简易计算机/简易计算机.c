#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    while (1) {
        int n;
        printf("1.+ 2.- 3.* 4./ 5.�˳�\n");
        scanf("%d", &n);

        switch (n) {
        case 1: {
            printf("����������������");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("�����%d\n", a + b);
            break;
        }
        case 2: {
            printf("����������������");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("�����%d\n", a - b);
            break;
        }
        case 3: {
            printf("����������������");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("�����%d\n", a * b);
            break;
        }
        case 4: {
            printf("����������������");
            int a, b;
            scanf("%d %d", &a, &b);
            while (b == 0) {
                printf("��������Ϊ0�����������������\n");
                scanf("%d", &b);
            }
            printf("%.2f\n",(double)a/b);
            break;
        }
        case 5:
            return 0;
        default:
            printf("��Чѡ��\n");
        }
    }
}
