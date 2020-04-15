#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int min = 1000001, max = -1000001;

    int x;
    while (N--) {
        scanf("%d", &x);
        if (min > x) min = x;
        if (max < x) max = x;
    }

    printf("%d %d", min ,max);
    return 0;
}
