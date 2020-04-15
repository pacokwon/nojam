#include <stdio.h>
#include <string.h>

char arr[5][15];

int main(void) {
    int max = -1;
    for (int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
        int len = strlen(arr[i]);
        if (len > max) max = len;
    }

    for (int j = 0; j < max; j++) {
        for (int i = 0; i < 5; i++) {
            if (arr[i][j] != 0) printf("%c", arr[i][j]);
        }
    }

    return 0;
}