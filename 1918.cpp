#include <stdio.h>
#include <stack>

bool is_operator(char op) {
    switch (op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}

int get_precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return 0;
}

int main(void) {
    char buffer[110];
    scanf("%s", buffer);

    std::stack<char> st;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '(') {
            st.push(buffer[i]);
        } else if (buffer[i] == ')') {
            while (st.top() != '(') {
                printf("%c", st.top());
                st.pop();
            }
            st.pop();
        } else if (is_operator(buffer[i])) {
            while (!st.empty() && get_precedence(st.top()) >= get_precedence(buffer[i])) {
                printf("%c", st.top());
                st.pop();
            }
            st.push(buffer[i]);
        } else {
            printf("%c", buffer[i]);
        }
    }

    while (!st.empty()) {
        printf("%c", st.top());
        st.pop();
    }
    printf("\n");

    return 0;
}
