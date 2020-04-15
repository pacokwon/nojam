#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n == 0) return !printf("0");
    else if (n == 1 || n == 2) return !printf("1");

    int a = 1, b = 1;
    int tmp;
    for (int i = 3; i <= n; i++) {
        tmp = b;
        b += a;
        a = tmp;
    }

    printf("%d", b);

    return 0;
}
