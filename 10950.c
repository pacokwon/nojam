#include <stdio.h>

int main(void) {
    int N, A, B;

    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    return 0;
}
