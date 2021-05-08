#include <algorithm>
#include <stdio.h>
#include <iostream>

int L, C;
char chars[18];
bool visited[18];
char path[18];

bool is_vowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
    }

    return false;
}

void iterate(int start, int length, int vowel_count) {
    if (length == L) {
        if (!(vowel_count >= 1 && (length - vowel_count) >= 2))
            return;

        for (int i = 0; i < length; i++)
            printf("%c", path[i]);
        printf("\n");
        return;
    }

    for (int i = start; i < C; i++) {
        if (visited[i]) continue;

        visited[i] = true;
        path[length] = chars[i];
        iterate (i, length + 1, is_vowel(chars[i]) ? (vowel_count + 1) : vowel_count);
        visited[i] = false;
    }
}

int main(void) {
    std::cin >> L >> C;
    for (int i = 0; i < C; i++)
        std::cin >> chars[i];

    std::sort(chars, chars + C);

    iterate(0, 0, 0);

    return 0;
}
