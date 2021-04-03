#include <stdio.h>

int main(void) {
    int L;
    long r = 31L, M = 1234567891L;
    scanf("%d", &L);

    char buffer[L + 1];
    scanf("%s", buffer);

    long hash = 0;
    for (int i = L - 1; i >= 0; i--) {
        hash = (hash * r + (buffer[i] - 'a' + 1)) % M;
    }

    printf("%ld", hash);

    return 0;
}
