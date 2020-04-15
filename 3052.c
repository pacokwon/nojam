#include <stdio.h>

int rems[42];
int main(void) {
    int in;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &in);
        rems[in % 42] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < 42; i++) {
        if (rems[i])
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}
