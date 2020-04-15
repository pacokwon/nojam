#include <stdio.h>

int N;
char b[7];
int main(void) {
    scanf("%d", &N);

    int cnt = 0;
    while (N != 0) {
        b[cnt++] = N % 2 + '0';
        N /= 2;
    }

    int ans = 0;
    for (int i = 0; i < cnt; i++) {
        if (b[i] == '1') ans++;
    }

    printf("%d", ans);

    return 0;
}