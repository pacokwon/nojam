#include <stdio.h>

int main(void) {
    char buffer[1010];

    scanf("%s", buffer);

    for (int i = 0; buffer[i] != '\0'; i++) {
        char converted = 'A' + ((buffer[i] - 'A') + 23) % 26;
        printf("%c", converted);
    }

    return 0;
}
