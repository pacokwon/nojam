#include <stdio.h>

int main(void) {
    int y;
    scanf("%d", &y);

    printf(y % 4 != 0 ? "0" : y % 400 == 0 || y % 100 != 0 ? "1" : "0");
    return 0;
}
