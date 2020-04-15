#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;
    char y[] = {'D', 'C', 'B', 'A', 'E'};
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &n);
            sum += n;
        }

        printf("%c\n", y[sum]);
    }


    return 0;
}