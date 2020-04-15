#include <stdio.h>

int N, F;
int main(void) {
    scanf("%d %d", &N, &F);
    int tmp = (N / F + 1) * F;
    if (tmp / 100 != N / 100) {
        tmp -= F;
    }

    printf("%02d", tmp % 100 - tmp % 100 / F * F);

    return 0;
}