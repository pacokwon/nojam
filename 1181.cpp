#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

bool compareStrings(const std::string& lhs, const std::string& rhs) {
    return lhs.length() == rhs.length()
        ? lhs < rhs
        : lhs.length() < rhs.length();
}

int main(void) {
    int T;
    std::cin >> T;
    std::vector<std::string> vec;

    std::string tmp;
    while (T--) {
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    std::set<std::string> s;
    for (unsigned i = 0; i < vec.size(); i++)
        s.insert(vec[i]);
    vec.assign(s.begin(), s.end());

    std::sort(vec.begin(), vec.end(), compareStrings);

    for (unsigned i = 0; i < vec.size(); i++)
        std::cout << vec[i] << "\n";

    return 0;
}
