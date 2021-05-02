#include <string.h>
#include <stdio.h>

int main(void) {
    char buffer[15];
    int found = 0;
    for (int i = 1; i <= 5; i++) {
        scanf("%s", buffer);

        if (strstr(buffer, "FBI") != NULL) {
            found = 1;
            printf("%d ", i);
        }
    }

    if (!found)
        printf("HE GOT AWAY!\n");

    return 0;
}
