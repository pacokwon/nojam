#include <stdio.h>

int main(void) {
    int room;
    scanf("%d", &room);
    if (room == 1) return !printf("1");

    int rangeLeft = 1, rangeRight = 7;
    int idx = 2;

    while (! (rangeLeft < room && room <= rangeRight)) {
        rangeLeft = rangeRight;
        rangeRight += 6 * idx;
        idx++;
    }

    printf("%d", idx);

    return 0;
}
