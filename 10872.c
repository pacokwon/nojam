#include <stdio.h>

int main(void) {
    long long ans = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) ans *= i;

    printf("%lld", ans);

    return 0;
}