#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 1, b = 1, fib, set, sum;
    scanf("%d", &set);

    if (set == 1) {
        printf("%d %d\n", a, a);
        return 0;
    }
    if (set == 2) {
        printf("%d %d\n", b, a + b);
        return 0;
    }

    sum = a + b;
    for (int i = 3; i <= set; i++) {
        fib = a + b;
        
        a = b;
        b = fib;
        sum += fib;
    }
    printf("%d %d\n", b, sum);
    return 0;
}