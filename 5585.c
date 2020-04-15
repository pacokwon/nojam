#include <stdio.h>

int main(void) {
    int p;
    scanf("%d", &p);
    p = 1000 - p;

    int coins[] = {500, 100, 50, 10, 5, 1};
    int cnt = 0;

    for (int i = 0; i < 6; i++) {
        cnt += p / coins[i];
        p %= coins[i];
    }

    printf("%d", cnt);

    return 0;
}