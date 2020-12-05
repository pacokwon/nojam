#include <stdio.h>

int N;
int ans;
int A[1010];
int dp[1010];

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", A + i);
        dp[i] = A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                dp[i] = max(dp[i], dp[j] + A[i]);
            }
        }
        ans = max(ans, dp[i]);
    }

    printf("%d", ans);

    return 0;
}
