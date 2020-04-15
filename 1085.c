#include <stdio.h>


int x, y, w, h;
int main(void) {
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min = 987654321;

    if (min > x) min = x;
    if (min > w - x) min = w - x;
    if (min > y) min = y;
    if (min > h - y) min = h - y;

    printf("%d", min);

    return 0;
}