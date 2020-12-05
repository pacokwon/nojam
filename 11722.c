#include <stdio.h>

int N;
int A[1010];
int dp[1010];
int ans = 0;

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", A + i);
        dp[i] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[j] > A[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }

    printf("%d", ans);

    return 0;
}
