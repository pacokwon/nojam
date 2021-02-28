#include <stdio.h>

int N, M;
int nums[2010];
bool dp[2010][2010];

void compute_dp() {
    for (int i = 1; i <= N; i++)
        dp[i][i] = true;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j + i <= N; j++) {
            // j ~ j + i
            int start = j;
            int end = j + i;

            if (start + 1 == end)
                dp[start][end] = nums[start - 1] == nums[end - 1];
            else
                dp[start][end] = dp[start + 1][end - 1] && (nums[start - 1] == nums[end - 1]);
            /* printf("start: %d\tend: %d\n", start, end); */
        }
    }
}

int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &nums[i]);

    compute_dp();

    scanf("%d", &M);
    int s, e;
    for (int i = 0; i < M; i++) {
        scanf("%d%d", &s, &e);
        printf("%d\n", dp[s][e]);
    }

    return 0;
}
