#include <stdio.h>
#include <math.h>

long long S;
int main(void) {
    scanf("%lld", &S);
    long long i = 1LL;

    while (i * (i + 1) / 2 <= S) i++;

    printf("%lld", i - 1);

    return 0;
}