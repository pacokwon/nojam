#include <stdio.h>

int N;
char balls[500010];

int min(int a, int b) {
    return a < b ? a : b;
}

int main(void) {
    scanf("%d", &N);
    scanf("%s", balls);

    int red = 0, blue = 0;
    for (int i = 0; i < N; i++) {
        if (balls[i] == 'R')
            red++;
        else
            blue++;
    }

    int leftRed = 0, leftBlue = 0, rightRed = 0, rightBlue = 0;
    if (balls[0] == 'R')
        while (leftRed < N && balls[leftRed] == 'R')
            leftRed++;
    else
        while (leftBlue < N && balls[leftBlue] == 'B')
            leftBlue++;

    if (balls[N - 1] == 'R')
        while (rightRed < N && balls[N - 1 - rightRed] == 'R')
            rightRed++;
    else
        while (rightBlue < N && balls[N - 1 - rightBlue] == 'B')
            rightBlue++;

    /* printf("red: %d, blue: %d, leftRed: %d, leftBlue: %d, rightRed: %d, rightBlue: %d\n", red, blue, leftRed, leftBlue, rightRed, rightBlue); */

    leftRed = red - leftRed;
    leftBlue = blue - leftBlue;
    rightRed = red - rightRed;
    rightBlue = blue - rightBlue;

    printf("%d", min(leftRed, min(leftBlue, min(rightRed, rightBlue))));

    return 0;
}
