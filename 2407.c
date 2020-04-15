#include <stdio.h>

long long ans = 1LL;
int n, m;
int main(void) {
    scanf("%d %d", &n, &m);

    if (n - m < m) m = n - m;

    for (int i = 1; i <= m; i++) {
        ans *= (n + 1 - i);
        ans /= i;
    }

    printf("%lld", ans);

    return 0;
}