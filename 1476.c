#include <stdio.h>

// e ≤ 15 s ≤28 m ≤ 19
int main(void) {
    int e = 1, s = 1, m = 1;
    int ie, is, im;
    scanf("%d %d %d", &ie, &is, &im);
    int count = 1;

    while (1) {
        if (e % 15 == ie && s % 28 == is && m % 19 == im) {
            printf("%d %d %d\n", e, s, m);
            printf("%d", count);
            break;
        }

        count++;
        e++;
        s++;
        m++;
    }

    return 0;
}