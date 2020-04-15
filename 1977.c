#include <stdio.h>

int st, end, sum, min;
int main(void) {
    scanf("%d %d", &st, &end);

    for (int i = 1; i * i <= end; i++) {
        if (i * i >= st) {
            if (!sum) min = i * i;
            sum += i * i;
        }
    }

    if (min != 0) {
        printf("%d\n%d", sum, min);
    } else {
        printf("-1");
    }
    
    return 0;
}