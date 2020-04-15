#include <stdio.h>

const double PI = 3.141592653589793;

int main(void) {
    double d;
    scanf("%lfd", &d);

    printf("%lf\n%lf", PI * d * d, 2 * d * d);

    return 0;
}