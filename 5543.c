#include <stdio.h>

int main(void) {
    int p, min1 = 3000, min2 = 3000;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &p);
        if (min1 > p) min1 = p;
    }

    for (int i = 0; i < 2; i++) {
        scanf("%d", &p);
        if (min2 > p) min2 = p;
    }

    printf("%d", min1 + min2 - 50);

    return 0;
}