#include <stdio.h>

int N = 123456 * 2;
int sieve[250000];
int main(void) {
    sieve[1] = 1;
    for (int i = 2; i * i < 123456 * 2; i++) {
        if (!sieve[i]) {
            for (int j = 2; i * j <= 123456 * 2; j++) sieve[i * j] = 1;
        }
    }

    int n;
    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (!sieve[i]) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}