#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int odd = n - n / 2;
    int even = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < odd; j++) {
            printf("*");
            if (j != odd - 1) printf(" ");
            else printf("\n ");
        }
        for (int j = 0; j < even; j++) {
            printf("*");
            if (j != even - 1) printf(" ");
            else printf("\n");
        }
    }

    return 0;
}
