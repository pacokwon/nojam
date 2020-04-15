#include <stdio.h>

int N, C;
long long ans;
int main(void) {
    scanf("%d", &N);

    while (N--) {
        scanf("%d", &C);
        if (N == 0) ans += C;
        else ans += C - 1;
    }

    printf("%lld", ans);
    
    return 0;
}