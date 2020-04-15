#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int n = N;
    int vote, cnt = 0;
    while (n--) {
        scanf("%d", &vote);
        if (vote) cnt++;
    }

    printf("Junhee is%s cute!", cnt > N - cnt ? "" : " not");

    return 0;
}