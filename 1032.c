#include <stdio.h>
#include <string.h>

int N;
char filenames[60][60];

int main(void) {
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%s", filenames[i]);

    int len = strlen(filenames[0]);

    for (int i = 0; i < len; i++) {
        char first = filenames[0][i];
        int is_equal = 1;

        for (int j = 1; j < N; j++) {
            if (is_equal && first != filenames[j][i])
                is_equal = 0;
        }

        if (is_equal)
            filenames[0][i] = first;
        else
            filenames[0][i] = '?';
    }

    printf("%s", filenames[0]);

    return 0;
}
