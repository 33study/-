#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student {
    int id;
    char name[20];
    float score;
};

int main() {
    struct Student students[10];
    int count = 0, choice;

    while (1) {
        printf("1.��� 2.��ʾ 3.�˳�: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("����ѧ�� ���� �ɼ�: ");
            scanf("%d %s %f", &students[count].id, students[count].name, &students[count].score);
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++) {
                printf("%d %s %.1f\n", students[i].id, students[i].name, students[i].score);
            }
            break;
        case 3:
            return 0;
        default:
            printf("��Чѡ������������\n");
            break;
        }
    }
}
