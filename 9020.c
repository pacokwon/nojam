#include <stdio.h>

int sieve[10000];
int main() {
    sieve[1] = 1;
    for (int i = 2; i * i < 10000; i++) {
        if (!sieve[i]) {
            for (int j = 2; j * i < 10000; j++)
                sieve[j * i] = 1;
        }
    }

    int T, num, A;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &num);
        A = num / 2;

        while (sieve[A] || sieve[num - A]) A--;

        printf("%d %d\n", A, num - A);
    }

    return 0;
}
