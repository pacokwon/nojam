#include <stdio.h>
#include <string.h>

char co1[10];
char co2[10];
char co3[10];
int main(void) {
    scanf("%s", co1);
    scanf("%s", co2);
    scanf("%s", co3);

    long long ans = 0L;

    if (!strcmp(co1, "black")) {
        ans += 0;
    } else if (!strcmp(co1, "brown")) {
        ans += 1;
    } else if (!strcmp(co1, "red")) {
        ans += 2;
    } else if (!strcmp(co1, "orange")) {
        ans += 3;
    } else if (!strcmp(co1, "yellow")) {
        ans += 4;
    } else if (!strcmp(co1, "green")) {
        ans += 5;
    } else if (!strcmp(co1, "blue")) {
        ans += 6;
    } else if (!strcmp(co1, "violet")) {
        ans += 7;
    } else if (!strcmp(co1, "grey")) {
        ans += 8;
    } else if (!strcmp(co1, "white")) {
        ans += 9;
    }
    
    ans *= 10;

    if (!strcmp(co2, "black")) {
        ans += 0;
    } else if (!strcmp(co2, "brown")) {
        ans += 1;
    } else if (!strcmp(co2, "red")) {
        ans += 2;
    } else if (!strcmp(co2, "orange")) {
        ans += 3;
    } else if (!strcmp(co2, "yellow")) {
        ans += 4;
    } else if (!strcmp(co2, "green")) {
        ans += 5;
    } else if (!strcmp(co2, "blue")) {
        ans += 6;
    } else if (!strcmp(co2, "violet")) {
        ans += 7;
    } else if (!strcmp(co2, "grey")) {
        ans += 8;
    } else if (!strcmp(co2, "white")) {
        ans += 9;
    }

    if (!strcmp(co3, "black")) {
        ans *= 1e0;
    } else if (!strcmp(co3, "brown")) {
        ans *= 1e1;
    } else if (!strcmp(co3, "red")) {
        ans *= 1e2;
    } else if (!strcmp(co3, "orange")) {
        ans *= 1e3;
    } else if (!strcmp(co3, "yellow")) {
        ans *= 1e4;
    } else if (!strcmp(co3, "green")) {
        ans *= 1e5;
    } else if (!strcmp(co3, "blue")) {
        ans *= 1e6;
    } else if (!strcmp(co3, "violet")) {
        ans *= 1e7;
    } else if (!strcmp(co3, "grey")) {
        ans *= 1e8;
    } else if (!strcmp(co3, "white")) {
        ans *= 1e9;
    }

    printf("%lld", ans);

    return 0;
}