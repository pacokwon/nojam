#include <stdio.h>

int N;
int main() {
    scanf("%d", &N);

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < i; j++) printf(" ");
        printf("*");
        for (int j = 1; j < N - 1; j++) {
            if (i == 0) printf("*");
            else printf(" ");
        }
        printf("*");

        for (int j = 0; j < 2 * N - 3 - 2 * i; j++) printf(" ");
        printf("*");
        for (int j = 1; j < N - 1; j++) {
            if (i == 0) printf("*");
            else printf(" ");
        }
        printf("*\n");
    }

    for (int i = 0; i < N - 1; i++) printf(" ");
    printf("*");
    for (int i = 1; i < N - 1; i++) printf(" ");
    printf("*");
    for (int i = 1; i < N - 1; i++) printf(" ");
    printf("*\n");

    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) printf(" ");
        printf("*");
        for (int j = 1; j < N - 1; j++) {
            if (i == 0) printf("*");
            else printf(" ");
        }
        printf("*");

        for (int j = 0; j < 2 * N - 3 - 2 * i; j++) printf(" ");
        printf("*");
        for (int j = 1; j < N - 1; j++) {
            if (i == 0) printf("*");
            else printf(" ");
        }

        printf("*");
        if (i != 0) printf("\n");
    }


    return 0;
}
