#include <stdio.h>

int main(void) {
    int n, l;
    scanf("%d %d", &n, &l);

    int k;
    for (int i = l; i <= 100; i++) {
        if (i % 2 == 0) {
            if (n % i == i / 2) {
                k = (n - i / 2) / i - i / 2 + 1;
                for (int j = k; j < k + i; j++) {
                    printf("%d ", j);
                }
                return 0;
            } else {
                continue;
            }
        } else {
            if (n % i == 0) {
                k = n / i - (i - 1) / 2;
                for (int j = k; j < k + i; j++) {
                    printf("%d ", j);
                }
                return 0;
            } else {
                continue;
            }
        }
    }

    printf("-1");
    return 0;
}