#include <stdio.h>

int P[30];
int T[30];
int DP[30];
int N;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d%d", T + i, P + i);

    for (int i = 0; i < N; i++) {
        DP[i + T[i]] = max(DP[i + T[i]], DP[i] + P[i]);
        DP[i + 1] = max(DP[i + 1], DP[i]);
    }

    printf("%d", DP[N]);

    return 0;
}
