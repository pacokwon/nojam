#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int d1 = b - a - 1;
    int d2 = c - b - 1;

    printf("%d", d1 > d2 ? d1 : d2);
    
    return 0;
}