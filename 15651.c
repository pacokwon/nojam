#include <stdio.h>

int arr[10];
int N, M;

void perm(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        arr[cnt] = i;
        perm(cnt + 1);
    }
}

int main(void) {
    scanf("%d%d", &N, &M);

    perm(0);

    return 0;
}
