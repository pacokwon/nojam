#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    printf(A > B ? ">" : A == B ? "==" : "<");
    return 0;
}
