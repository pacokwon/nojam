#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (B >= C) return !printf("-1");

    printf("%d", A / (C - B) + 1);

    return 0;
}
