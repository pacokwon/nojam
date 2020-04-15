#include <stdio.h>

int visited[10];
int arr[10];
int N, M;

void perm(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for (int i = cnt == 0 ? 1 : arr[cnt - 1]; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            arr[cnt] = i;
            perm(cnt + 1);
            visited[i] = 0;
        }
    }
}

int main(void) {
    scanf("%d%d", &N, &M);
    arr[0] = 1;
    perm(0);

    return 0;
}
