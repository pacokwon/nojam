#include <stdio.h>

int main(void) {
    int x = 0, y = 0, a, b;
    for (int i = 0; i < 3; i++) {
        scanf("%d%d", &a, &b);
        x ^= a; y ^= b;
    }

    printf("%d %d\n", x, y);

    return 0;
}
