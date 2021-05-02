#include <stdio.h>

char strings[52][17];
int visited[30];
int path[20];
int N, K;
int ans;

void dfs(int current, int count) {
    if (count == K) {
        int teachable = 0;

        for (int i = 0; i < N; i++) {
            int j;
            for (j = 0; strings[i][j]; j++) {
                int k;
                for (int k = 0; k < K; k++)
                    if (path[k] == (strings[i][j] - 'a'))
                        break;

                if (k == K)
                    break;
            }

            if (strings[i][j] == '\0')
                teachable++;
        }

        if (teachable > ans) {
            ans = teachable;

            for (int i = 0; i < K; i++) {
                printf("%c ", 'a' + path[i]);
            }
        }

        return;
    }

    for (int i = current + 1; i < 26; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            path[count] = i;
            dfs(i, count + 1);
            visited[i] = 0;
        }
    }
}

int main(void) {
    scanf("%d %d", &N, &K);

    char buffer[20];
    for (int i = 0; i < N; i++) {
        scanf("%s", strings[i]);
    }

    for (int i = 0; i < 26; i++) {
        visited[i] = 1;
        path[0] = i;
        dfs(i, 1);
        visited[i] = 0;
    }

    printf("%d", ans);

    return 0;
}
