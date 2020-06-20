#include <stdio.h>

long long P[110];
int lIdx = 1;


int main() {
    int T;

    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;
    lIdx = 5;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        if (P[n] == 0) {
            for (int i = lIdx + 1; i <= n; i++) {
                P[i] = P[i - 1] + P[i - 5];
            }
            lIdx = n;
        }
        printf("%lld\n", P[n]);
    }

    return 0;
}
