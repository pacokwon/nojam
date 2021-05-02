#include <stdio.h>

int main(void) {
    int N, M, count, answer;
    char line[1000002];

    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%s", line);

    count = 0;
    answer = 0;
    for (int i = 0; i < M; i++) {
        if (line[i] == 'O' && line[i - 1] == 'I') {
            count++;
        } else if (line[i] == 'I' && line[i - 1] == 'O') {
            if (count >= N)
                answer++;
        } else {
            count = 0;
        }
    }

    printf ("%d", answer);

    return 0;
}
