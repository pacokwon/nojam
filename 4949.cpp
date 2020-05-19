#include <iostream>
#include <string>
#include <stack>

bool check(std::string& s) {
    std::stack<char> st;

    for (char c: s) {
        if (c == '(' || c == '[') {
            st.push(c);
        } else if (c == ')') {
            /* std::cout << "here" << st.top(); */
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        } else if (c == ']') {
            /* std::cout << "here2" << st.top(); */
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        }
    }

    /* std::cout << "here3"; */
    return st.empty();
}

int main() {
    std::string tmp;

    while (true) {
        std::getline(std::cin, tmp);
        if (tmp.compare(".") == 0) break;
        if (check(tmp)) std::cout << "yes" << std::endl;
        else std::cout << "no" << std::endl;
    }
    return 0;
}
