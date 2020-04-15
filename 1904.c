#include <stdio.h>

int dp[1000010];

int main(void) {
    dp[0] = 1;
    dp[1] = 1;

    int N;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    printf("%d", dp[N]);

    return 0;
}