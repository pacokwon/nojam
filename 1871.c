#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first_to_int(char *buf) {
    return 26 * 26 * (buf[0] - 'A') + 26 * (buf[1] - 'A') + (buf[2] - 'A');
}

int second_to_int(char *buf) {
    return atoi(buf + 4);
}

int abs(int n) {
    return n < 0 ? -n : n;
}

int main(void) {
    int N;
    char buffer[10];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", buffer);

        if (abs(first_to_int(buffer) - second_to_int(buffer)) <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }

    return 0;
}
