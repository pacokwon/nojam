#include <stdio.h>

int D[60];
int N, max = 0, min = 2000000;
int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", D + i);
        if (max < D[i]) max = D[i];
        if (min > D[i]) min = D[i];
    }

    printf("%d", min * max);
    
    return 0;
}