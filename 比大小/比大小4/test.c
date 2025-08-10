#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 找出两个数中的最大值
int max_of_two(int x, int y) {
    return (x > y) ? x : y;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = max_of_two(max_of_two(a, b), c);

    printf("%d\n", max);
    return 0;
}
