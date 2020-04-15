#include <stdio.h>

int M, N;
int sieve[10010];
int main(void) {
    sieve[1] = 1;
    scanf("%d %d", &M, &N);
    int ans = 0, min;

    for (int i = 2; i * i < N; i++) {
        if (!sieve[i]) {
            for (int j = 2; j * i <= N; j++) {
                sieve[j * i] = 1;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (sieve[i]) continue;
        if (ans == 0) min = i;
        ans += i;
    }

    if (ans) {
        printf("%d\n%d", ans, min);
    } else {
        printf("-1");
    }

    return 0;
}
