#include <stdio.h>

int digitsSum(int num) {
    if (num == 0) return 0;
    else return num % 10 + digitsSum(num / 10);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i % digitsSum(i) == 0)
            cnt += 1;
    }

    printf("%d", cnt);

    return 0;
}
