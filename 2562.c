#include <stdio.h>

int main() {
    int maxVal = 0, maxIdx = -1;
    int in;
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &in);
        if (maxVal < in) {
            maxVal = in;
            maxIdx = i;
        }
    }

    printf("%d\n%d", maxVal, maxIdx);

    return 0;
}
