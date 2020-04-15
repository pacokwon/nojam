#include <stdio.h>

int sieve[1010];
int N;

int main(void) {
    sieve[1] = 1;
    for (int i = 2; i * i <= 1000; i++) {
        if (sieve[i]) continue;
        for (int j = i * 2; j <= 1000; j += i) {
            sieve[j] = 1;
        }
    }

    scanf("%d", &N);

    int n, count = 0;
    while (N--) {
        scanf("%d", &n);
        if (!sieve[n]) count++;
    }

    printf("%d", count);
}