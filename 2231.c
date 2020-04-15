#include <stdio.h>

int split(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n == split(i)) return !printf("%d", i);
    }

    printf("0");
    return 0;
}
