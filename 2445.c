#include <stdio.h>

int N;
int main(void) {
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 2 * i; j < 2 * N; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 2 * i; j < 2 * N; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }



    return 0;
}