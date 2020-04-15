#include <stdio.h>
#include <string.h>

int N, K;
int main(void) {
    scanf("%d%d", &N, &K);

    char tmp[20];
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        scanf("%s", tmp);
        int len = strlen(tmp);

        if (cnt == 0) {
            printf("%s", tmp);
            cnt += len;
            /* printf("CNT: %d\n", cnt); */
        } else if (cnt + len > K) {
            printf("\n%s", tmp);
            cnt = len;
            /* printf("CNT: %d\n", cnt); */
        } else {
            printf(" %s", tmp);
            cnt += len;
            /* printf("CNT: %d\n", cnt); */
        }
    }


    return 0;
}
