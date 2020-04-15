#include <stdio.h>

int N, A, B;

int adj(int a, int b) {
    int min = a > b ? b : a;
    int max = a > b ? a : b;

    if (min != max - 1) return 0;
    if (min % 2 == 1 && max % 2 == 0) return 1;
    else return 0;
}

int main(void) {
    scanf("%d %d %d", &N, &A, &B);
    int round = 1;

    while (!adj(A, B)) {
        A = (A + 1) / 2;
        B = (B + 1) / 2;

        round += 1;
    }

    printf("%d", round);

    return 0;
}