#include <stdio.h>

int rev(int x) {
    int sum = 0;
    while (x != 0) {
        sum *= 10;
        sum += x % 10;

        x /= 10;
    }

    return sum;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", rev(rev(a) + rev(b)));

    return 0;
}