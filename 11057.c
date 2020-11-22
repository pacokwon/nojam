#include <stdio.h>

int N;
// dp[m][n] - 길이가 m이고 n으로 끝나는 오르막 수
int dp[1010][10];

int main(void) {
    scanf("%d", &N);

    /* dp[m][0] ~ dp[m][9] */

    /* dp[m + 1][0] = dp[m][0]; */
    /* dp[m + 1][1] = dp[m][0] + dp[m][1]; */
    /* dp[m + 1][2] = dp[m][0] + dp[m][1] + dp[m][2]; */

    for (int i = 0; i <= 9; i++)
        dp[1][i] = 1;

    /*
        dp[2][0] -> 1
        dp[2][1] -> 2
        dp[2][2] -> 3
        dp[2][3] -> 4
        dp[2][4] -> 5
    */

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= 9; j++) {
            // initialize dp[i][j] here
            if (j == 0)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 10007;
        }
    }

    int sum = 0;
    for (int j = 0; j <= 9; j++) {
        sum = (sum + dp[N][j]) % 10007;
    }
    printf("%d", sum);

    return 0;
}
