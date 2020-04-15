#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int d, ans = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &d);
        if (n == d) ans++;
    }

    printf("%d", ans);

    return 0;
}