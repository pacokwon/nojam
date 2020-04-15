#include <stdio.h>

int N;
int main(void) {
    scanf("%d", &N);

    int n;
    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        printf("%d is%s a multiple of %d.\n", n, n % N == 0 ? "" : " NOT", N);
    }

    return 0;
}