#include <stdio.h>

int main(void) {
    int tot;
    scanf("%d", &tot);
    int p;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &p);
        tot -= p;
    }

    printf("%d", tot);

    return 0;
}