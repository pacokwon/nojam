#include <stdio.h>

int n, m;
int main(void) {
    scanf("%d %d", &n, &m);
    int count = 0;

    int diff = n - m;

    int flag = 5;
    while (n >= flag) {
        count += n / flag;
        flag *= 5;
    }

    flag = 5;

    while (n - m >= flag) {
        count -= (n - m) / flag;
        flag *= 5;
    }

    flag = 5;
    while (m >= flag) {
        count -= m / flag;
        flag *= 5;
    }

    printf("%d", count);

    return 0;
}