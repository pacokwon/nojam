#include <iostream>
using namespace std;

int arr[10];
bool visited[10];
int N, M;
void perm(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = i;
            perm(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void) {
    scanf("%d %d", &N, &M);

    perm(0);
}
