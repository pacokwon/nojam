#include <stdio.h>

int main(void) {
    long long N;
    scanf("%lld", &N);

    printf("%lld", (N + 1) * N * (N - 1) / 2);

    return 0;
}