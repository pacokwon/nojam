#include <stdio.h>

int N;

int count(int n) {
    int cnt = 0;
    while (n != 0) {
        int r = n % 10;
        if (r == 3 || r == 6 || r == 9)
            cnt++;
        n /= 10;
    }

    return cnt;
}

int main(void) {
    scanf("%d", &N);

    int cnt = 0;
    for (int i = 0; i < N / 10; i++) {
        cnt += count(i) * 10 + 3;
    }

    int nCount = count(N / 10);
    for (int i = N / 10 * 10; i <= N; i++) {
        cnt += nCount;

        int r = i % 10;
        if (r == 3 || r == 6 || r == 9)
            cnt += 1;
    }

    printf("%d", cnt);
    return 0;
}
