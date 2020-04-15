#include <stdio.h>

int toFive(int n) {
    int sum = 0;
    short cnt = 0;

    while (n != 0) {
        int power = 1;
        for (int i = 0; i < cnt; i++) power *= 10;
        sum += ((n % 10) == 6 ? 5 : n % 10) * power;
        cnt++;
        n /= 10;
    }

    return sum;
}

int toSix(int n) {
    int sum = 0;
    short cnt = 0;

    while (n != 0) {
        int power = 1;
        for (int i = 0; i < cnt; i++) power *= 10;
        sum += ((n % 10) == 5 ? 6 : n % 10) * power;
        cnt++;
        n /= 10;
    }

    return sum;
}

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%d %d", toFive(A) + toFive(B), toSix(A) + toSix(B));

    return 0;
}