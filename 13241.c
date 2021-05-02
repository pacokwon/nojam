#include <stdio.h>

typedef long long int lli;

lli gcd(lli a, lli b) {
    if (b == 0) return a;

    return gcd(b, a % b);
}

int main(void) {
    lli a, b;
    scanf("%lld %lld", &a, &b);

    lli G = gcd(a, b);
    lli ga = a / G, gb = b / G;

    printf("%lld", ga * gb * G);

    return 0;
}
