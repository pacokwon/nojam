#include <stdio.h>

int func(int k, int n) {
    if (n == 1) return 1;
    else if (k == 0) return n;
    else return func(k, n - 1) + func(k -1, n);
}

int main(void) {
    int T;
    scanf("%d", &T);
    int a, b;
    while (T--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", func(a, b));
    }

    return 0;
}
