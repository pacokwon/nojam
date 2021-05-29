#include <stdio.h>

int main(void) {
    int x1, x2, y1, y2, p1, p2, q1, q2;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &p1, &q1, &x2, &y2, &p2, &q2);

        if (p1 < x2 || y1 > q2 || x1 > p2 || q1 < y2)
            printf("d\n");
        else if ((x1 == p2 && y1 == q2) || (p1 == x2 && y1 == q2) || (p1 == x2 && q1 == y2) || (x1 == p2 && q1 == y2))
            printf("c\n");
        else if (y1 == q2 || x1 == p2 || q1 == y2 || p1 == x2)
            printf("b\n");
        else
            printf("a\n");
    }

    return 0;
}
