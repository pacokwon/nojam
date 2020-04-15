#include <stdio.h>


int digits[10];
int count;
int N;
int main(void) {
    scanf("%d", &N);

    do {
        int d = N % 10;

        if (d == 6 || d == 9) {
            if (digits[6] <= digits[9]) {
                d = 6;
            } else {
                d = 9;
            }
        }
        if (digits[d] == count) count++;
        digits[d]++;

        N /= 10;
    } while (N != 0);

    printf("%d", count);

    return 0;
}