#include <stdio.h>
#include <iostream>
#include <string>

bool check(int n) {
    std::string num = std::to_string(n);

    return num.find("666") != std::string::npos;
}

int main(void) {
    int n, i = 667, cnt = 1;
    std::cin >> n;

    while (cnt < n) {
        if (check(i++))
            cnt++;
    }
    std::cout << i - 1;


    return 0;
}
