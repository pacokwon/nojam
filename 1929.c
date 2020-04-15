#include <stdio.h>

int sieve[1000010];
int main(void) {
    int N, M;
    sieve[1] = 1;
    scanf("%d %d", &M, &N);
    for (int i = 2; i * i < N; i++) {
        if (!sieve[i]) {
            for (int j = 2; j * i <= N; j++) {
                sieve[i * j] = 1;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (!sieve[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}
